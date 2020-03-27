//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DLinkablePipeline.h>

@class TSCH3DFramebuffer;
@protocol TSCH3DPipelineLinkable;

__attribute__((visibility("hidden")))
@interface TSCH3DFramebufferTransformPipeline : TSCH3DLinkablePipeline
{
    id <TSCH3DPipelineLinkable> mSource;
    TSCH3DFramebuffer *mTarget;
    TSCH3DFramebuffer *mInput;
}

@property(retain, nonatomic) TSCH3DFramebuffer *target; // @synthesize target=mTarget;
@property(retain, nonatomic) id <TSCH3DPipelineLinkable> source; // @synthesize source=mSource;
- (BOOL)run;
- (BOOL)prepareFramebuffer;
- (void)loadSource;
- (void)dealloc;

@end

