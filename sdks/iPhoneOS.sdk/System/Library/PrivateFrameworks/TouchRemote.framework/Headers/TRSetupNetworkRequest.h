//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRSetupNetworkRequest : TRRequestMessage
{
    NSString *_networkSSID;
    NSString *_networkPassword;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *networkPassword; // @synthesize networkPassword=_networkPassword;
@property(copy, nonatomic) NSString *networkSSID; // @synthesize networkSSID=_networkSSID;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

