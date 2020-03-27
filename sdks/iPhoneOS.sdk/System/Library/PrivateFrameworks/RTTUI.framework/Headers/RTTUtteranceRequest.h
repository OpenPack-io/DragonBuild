//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, TUCall;

@interface RTTUtteranceRequest : NSObject
{
    NSUInteger _index;
    NSString *_string;
    NSIndexPath *_cellIndexPath;
    TUCall *_call;
}

+ (id)utteranceRequestWithIndex:(NSUInteger)arg1 forString:(id)arg2 inCellPath:(id)arg3 call:(id)arg4;
@property(retain, nonatomic) TUCall *call; // @synthesize call=_call;
@property(nonatomic) __weak NSIndexPath *cellIndexPath; // @synthesize cellIndexPath=_cellIndexPath;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) NSUInteger index; // @synthesize index=_index;
// - (void).cxx_destruct;
- (id)description;

@end

