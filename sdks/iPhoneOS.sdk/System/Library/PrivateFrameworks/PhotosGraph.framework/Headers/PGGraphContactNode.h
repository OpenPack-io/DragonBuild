//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

@class NSDate, NSString;

@interface PGGraphContactNode : PGGraphNode
{
    NSString *_contactIdentifier;
}

// - (void).cxx_destruct;
@property(readonly) NSDate *potentialBirthdayDate;
@property(readonly) NSDate *birthdayDate;
- (NSUInteger)genderHintForGivenName;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;

@end

