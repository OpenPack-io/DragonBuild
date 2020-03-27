//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString, SBKResponseStatus;

__attribute__((visibility("hidden")))
@interface SBKResponse : NSObject
{
    NSDictionary *_responseDictionary;
    NSUInteger _responseCode;
    NSDictionary *_responseHeaderFields;
    NSError *_error;
    double _retrySeconds;
    NSString *_MIMEType;
    SBKResponseStatus *_responseStatus;
}

+ (id)responseWithResponse:(id)arg1;
+ (id)responseWithCode:(NSUInteger)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;
+ (id)responseWithURLResponse:(id)arg1 responseDictionary:(id)arg2;
@property(readonly, nonatomic) SBKResponseStatus *responseStatus; // @synthesize responseStatus=_responseStatus;
@property(readonly, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly) double retrySeconds; // @synthesize retrySeconds=_retrySeconds;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDictionary *responseHeaderFields; // @synthesize responseHeaderFields=_responseHeaderFields;
@property(readonly, nonatomic) NSUInteger responseCode; // @synthesize responseCode=_responseCode;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
// - (void).cxx_destruct;
@property(readonly) BOOL isPuntedError;
@property(readonly) BOOL isValidationError;
@property(readonly) BOOL isAuthenticationError;
@property(readonly) BOOL isUnsupportedClient;
@property(readonly) BOOL isGenericError;
@property(readonly) BOOL shouldFileRadar;
@property(readonly) BOOL isError;
@property(readonly) BOOL isRecoverable;
@property(readonly) BOOL isSuccess;
@property(readonly) NSError *requestError;
@property(readonly, copy) NSString *consoleDescription;
@property(readonly) long long statusCode;
- (id)description;
- (id)initWithCode:(NSUInteger)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;
- (id)initWithURLResponse:(id)arg1 responseDictionary:(id)arg2;

@end

