//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/ISStoreURLOperationDelegate-Protocol.h>

@class IKAppContext, JSManagedValue, NSArray, NSMutableArray, NSString;

@interface IKScriptsEvaluator : NSObject <ISStoreURLOperationDelegate, NSURLConnectionDataDelegate>
{
    BOOL _isJingleRequest;
    NSArray *_scripts;
    IKAppContext *_appContext;
    JSManagedValue *_callback;
    NSMutableArray *_records;
    NSString *_identifier;
}

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) JSManagedValue *callback; // @synthesize callback=_callback;
@property(nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSArray *scripts; // @synthesize scripts=_scripts;
@property(nonatomic) BOOL isJingleRequest; // @synthesize isJingleRequest=_isJingleRequest;
// - (void).cxx_destruct;
- (void)_sendCallback:(id)arg1 inContext:(id)arg2 success:(BOOL)arg3;
- (void)_operation:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)evaluateScripts;
- (void)handleScirptLoadFailure;
- (void)scriptDidLoadWithID:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)parseScriptData:(id)arg1 successPredicate:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)evaluate;
- (id)initWithScripts:(id)arg1 withContext:(id)arg2 callback:(id)arg3 jingleRequest:(BOOL)arg4;

@end

