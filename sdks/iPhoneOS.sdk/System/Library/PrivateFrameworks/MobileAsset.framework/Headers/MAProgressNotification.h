//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MAProgressNotification : NSObject
{
    BOOL _isStalled;
    long long _totalExpected;
    long long _totalWritten;
    double _expectedTimeRemaining;
}

@property(nonatomic) double expectedTimeRemaining; // @synthesize expectedTimeRemaining=_expectedTimeRemaining;
@property(nonatomic) BOOL isStalled; // @synthesize isStalled=_isStalled;
@property(nonatomic) long long totalWritten; // @synthesize totalWritten=_totalWritten;
@property(nonatomic) long long totalExpected; // @synthesize totalExpected=_totalExpected;

@end

