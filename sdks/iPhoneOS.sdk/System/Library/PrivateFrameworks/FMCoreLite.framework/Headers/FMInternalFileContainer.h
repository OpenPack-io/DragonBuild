//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMFileContainer-Protocol.h>

@class NSURL;

@interface FMInternalFileContainer : NSObject <FMFileContainer>
{
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (id)internalContainerURL;
- (id)init;

@end

