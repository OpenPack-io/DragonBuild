//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSNumber;

@interface PKFelicaGreenCarTicket : NSObject <NSSecureCoding>
{
    BOOL _refunded;
    NSData *_originStation;
    NSData *_destinationStation;
    NSNumber *_validityStartDate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic, getter=isRefunded) BOOL refunded; // @synthesize refunded=_refunded;
@property(readonly, copy, nonatomic) NSNumber *validityStartDate; // @synthesize validityStartDate=_validityStartDate;
@property(readonly, copy, nonatomic) NSData *destinationStation; // @synthesize destinationStation=_destinationStation;
@property(readonly, copy, nonatomic) NSData *originStation; // @synthesize originStation=_originStation;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

