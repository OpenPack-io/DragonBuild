//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXSimpleRuntimeManager : NSObject
{
    BOOL _systemWideServer;
    BOOL _started;
    id /* CDUnknownBlockType */ _parameterizedAttributeCallback;
    id /* CDUnknownBlockType */ _attributeCallback;
    id /* CDUnknownBlockType */ _setAttributeCallback;
    id /* CDUnknownBlockType */ _performActionCallback;
    id /* CDUnknownBlockType */ _clientObserverCallback;
    id /* CDUnknownBlockType */ _hitTestCallback;
    id /* CDUnknownBlockType */ _applicationElementCallback;
    id /* CDUnknownBlockType */ _outgoingValuePreprocessor;
}

+ (id)sharedManager;
@property(copy, nonatomic) id /* CDUnknownBlockType */ outgoingValuePreprocessor; // @synthesize outgoingValuePreprocessor=_outgoingValuePreprocessor;
@property(copy, nonatomic) id /* CDUnknownBlockType */ applicationElementCallback; // @synthesize applicationElementCallback=_applicationElementCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ hitTestCallback; // @synthesize hitTestCallback=_hitTestCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ clientObserverCallback; // @synthesize clientObserverCallback=_clientObserverCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ performActionCallback; // @synthesize performActionCallback=_performActionCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ setAttributeCallback; // @synthesize setAttributeCallback=_setAttributeCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ attributeCallback; // @synthesize attributeCallback=_attributeCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ parameterizedAttributeCallback; // @synthesize parameterizedAttributeCallback=_parameterizedAttributeCallback;
@property(nonatomic) BOOL started; // @synthesize started=_started;
@property(nonatomic) BOOL systemWideServer; // @synthesize systemWideServer=_systemWideServer;
// - (void).cxx_destruct;
- (void)start;

@end

