//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentAnchor-Protocol.h>

@class NSString;

@interface SXComponentAnchor : NSObject <SXComponentAnchor>
{
    NSString *_targetComponentIdentifier;
    long long _targetAnchorPosition;
    long long _originAnchorPosition;
    _NSRange _range;
}

@property(nonatomic) _NSRange range; // @synthesize range=_range;
@property(nonatomic) long long originAnchorPosition; // @synthesize originAnchorPosition=_originAnchorPosition;
@property(nonatomic) long long targetAnchorPosition; // @synthesize targetAnchorPosition=_targetAnchorPosition;
@property(readonly, nonatomic) NSString *targetComponentIdentifier; // @synthesize targetComponentIdentifier=_targetComponentIdentifier;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithTargetComponentIdentifier:(id)arg1;

@end

