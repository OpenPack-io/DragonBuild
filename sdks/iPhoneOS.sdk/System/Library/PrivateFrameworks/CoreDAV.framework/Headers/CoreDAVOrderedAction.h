//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVAction.h>

@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction
{
    int _absoluteOrder;
    NSURL *_priorURL;
}

@property(retain, nonatomic) NSURL *priorURL; // @synthesize priorURL=_priorURL;
@property(readonly, nonatomic) int absoluteOrder; // @synthesize absoluteOrder=_absoluteOrder;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithAction:(int)arg1 context:(id)arg2 absoluteOrder:(int)arg3;

@end

