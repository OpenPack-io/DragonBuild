//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSString, NSURL, NSURLSession;

@interface WFPinboardSessionManager : NSObject
{
    NSURLSession *_session;
    NSString *_username;
    NSString *_password;
    NSString *_apiToken;
    NSURL *_baseURL;
    NSDateFormatter *_dateTimeFormatter;
}

@property(readonly, nonatomic) NSDateFormatter *dateTimeFormatter; // @synthesize dateTimeFormatter=_dateTimeFormatter;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *apiToken; // @synthesize apiToken=_apiToken;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
// - (void).cxx_destruct;
- (id)authenticatedTaskWithURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getModifiedDateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getBookmarksWithTags:(id)arg1 limit:(NSUInteger)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)addBookmark:(id)arg1 withTitle:(id)arg2 parameters:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)initWithSession:(id)arg1;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

@end

