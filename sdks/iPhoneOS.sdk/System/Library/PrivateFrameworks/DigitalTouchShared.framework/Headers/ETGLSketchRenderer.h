//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAEAGLLayer, EAGLContext, MISSING_TYPE;
@protocol ETGLSketchRendererDelegate;

@interface ETGLSketchRenderer : NSObject
{
    BOOL _useThisRendererOnlyForWarmup;
    BOOL _isDying;
    BOOL _renderingOffscreen;
    BOOL _useFastVerticalWisp;
    float _currentTimeClock;
    float _currentTimeIndex;
    int _vertexBufferCount;
    int _vertexBufferBegin;
    float _deathTime;
    float _lastBirth;
    unsigned int _shaderProgram;
    unsigned int _vboVertLineId;
    unsigned int _vaoLineID;
    unsigned int _viewRenderbuffer;
    unsigned int _viewFramebuffer;
    unsigned int _backingWidth;
    unsigned int _backingHeight;
    unsigned int _allocatedWidth;
    unsigned int _allocatedHeight;
    double _wispDelay;
    id <ETGLSketchRendererDelegate> _delegate;
    double _lineWidthScaleFactor;
    struct _allVertices;
    NSUInteger _vertexCount;
    double _cometScaleFactor;
    EAGLContext *_context;
    CAEAGLLayer *_cachedLayer;
    id /* CDUnknownBlockType */ _completionBlock;
    MISSING_TYPE *_brushColorForInitialColor;
    MISSING_TYPE *_brushColorForFinalColor;
}

+ (void)warmupShaders;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) CAEAGLLayer *cachedLayer; // @synthesize cachedLayer=_cachedLayer;
@property(nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned int allocatedHeight; // @synthesize allocatedHeight=_allocatedHeight;
@property(nonatomic) unsigned int allocatedWidth; // @synthesize allocatedWidth=_allocatedWidth;
@property(nonatomic) double cometScaleFactor; // @synthesize cometScaleFactor=_cometScaleFactor;
@property(nonatomic) unsigned int backingHeight; // @synthesize backingHeight=_backingHeight;
@property(nonatomic) unsigned int backingWidth; // @synthesize backingWidth=_backingWidth;
@property(nonatomic) unsigned int viewFramebuffer; // @synthesize viewFramebuffer=_viewFramebuffer;
@property(nonatomic) unsigned int viewRenderbuffer; // @synthesize viewRenderbuffer=_viewRenderbuffer;
@property(nonatomic) unsigned int vaoLineID; // @synthesize vaoLineID=_vaoLineID;
@property(nonatomic) unsigned int vboVertLineId; // @synthesize vboVertLineId=_vboVertLineId;
@property(nonatomic) unsigned int shaderProgram; // @synthesize shaderProgram=_shaderProgram;
@property(nonatomic) MISSING_TYPE *brushColorForFinalColor; // @synthesize brushColorForFinalColor=_brushColorForFinalColor;
@property(nonatomic) MISSING_TYPE *brushColorForInitialColor; // @synthesize brushColorForInitialColor=_brushColorForInitialColor;
@property(nonatomic) float lastBirth; // @synthesize lastBirth=_lastBirth;
@property(nonatomic) float deathTime; // @synthesize deathTime=_deathTime;
@property(nonatomic) NSUInteger vertexCount; // @synthesize vertexCount=_vertexCount;
@property(nonatomic) int vertexBufferBegin; // @synthesize vertexBufferBegin=_vertexBufferBegin;
@property(nonatomic) int vertexBufferCount; // @synthesize vertexBufferCount=_vertexBufferCount;
@property(nonatomic) struct allVertices; // @synthesize allVertices=_allVertices;
@property(nonatomic) BOOL useFastVerticalWisp; // @synthesize useFastVerticalWisp=_useFastVerticalWisp;
@property(nonatomic) double lineWidthScaleFactor; // @synthesize lineWidthScaleFactor=_lineWidthScaleFactor;
@property(nonatomic) BOOL renderingOffscreen; // @synthesize renderingOffscreen=_renderingOffscreen;
@property(nonatomic) __weak id <ETGLSketchRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double wispDelay; // @synthesize wispDelay=_wispDelay;
@property(nonatomic) BOOL isDying; // @synthesize isDying=_isDying;
@property(readonly, nonatomic) float currentTimeIndex; // @synthesize currentTimeIndex=_currentTimeIndex;
@property(readonly, nonatomic) float currentTimeClock; // @synthesize currentTimeClock=_currentTimeClock;
// - (void).cxx_destruct;
- (void)render;
- (CGImage )createRenderedFrameImageUsingAlpha:(BOOL)arg1;
- (void)_warmupShaders;
- (void)updateVertexBufferWithVertexCount:(NSUInteger)arg1;
- 
- (void)appendPointArray:(MISSING_TYPE *)arg1 length:(NSUInteger)arg2;
- (void)erase;
- (void)reset;
- (BOOL)resizeFromLayer:(id)arg1;
- (BOOL)resizeFromCachedLayer;
- (void)setupVAOs;
- (int)linkProgramWithVShader:(int)arg1 FShader:(int)arg2;
- (int)loadOneShaderOfType:(unsigned int)arg1 withCString:(const char )arg2 length:(int)arg3;
- (void)setupShaders;
- (void)setupTexture;
- (void)setupFBOs:(id)arg1;
- (void)setFinalDrawingColor:(MISSING_TYPE *)arg1;
- (void)setInitialDrawingColor:(MISSING_TYPE *)arg1;
- (void)updateGLWithCurrentTime;
- (void)updateGLWithTime:(float)arg1;
- (void)animateOutWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 andDrawable:(id)arg2;

@end

