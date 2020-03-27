//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVMultiStatusItem, NSSet;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask
{
    CoreDAVMultiStatusItem *_multiStatus;
    NSSet *_propertiesToFind;
}

@property(retain, nonatomic) CoreDAVMultiStatusItem *multiStatus; // @synthesize multiStatus=_multiStatus;
@property(retain, nonatomic) NSSet *propertiesToFind; // @synthesize propertiesToFind=_propertiesToFind;
// - (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)getTotalFailureError;
- (void)updateMultiStatusFromResponse;
- (id)successfulValueForNameSpace:(id)arg1 elementName:(id)arg2;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)additionalHeaderValues;
- (id)parseHints;
- (id)description;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2;

@end

