//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriTaskDelivering-Protocol.h>

@class NSString;

@interface AFMachServiceSiriTaskDeliverer : NSObject <AFSiriTaskDelivering>
{
    NSString *_machServiceName;
}

+ (id)machServiceSiriTaskDelivererForAppWithBundleIdentifier:(id)arg1;
// - (void).cxx_destruct;
- (void)deliverSiriTask:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithMachServiceName:(id)arg1;

@end

