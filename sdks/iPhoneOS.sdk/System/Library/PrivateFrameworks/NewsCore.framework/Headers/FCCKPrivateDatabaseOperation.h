//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase;

@interface FCCKPrivateDatabaseOperation : FCOperation
{
    BOOL _skipPreflight;
    BOOL _handleIdentityLoss;
    FCCKPrivateDatabase *_database;
}

@property(nonatomic) BOOL handleIdentityLoss; // @synthesize handleIdentityLoss=_handleIdentityLoss;
@property(nonatomic) BOOL skipPreflight; // @synthesize skipPreflight=_skipPreflight;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
// - (void).cxx_destruct;
- (void)runChildCKOperation:(id)arg1 destination:(long long)arg2;
- (BOOL)canRetryWithError:(id)arg1 retryAfter:(id )arg2;
- (NSUInteger)maxRetries;
- (BOOL)validateOperation;
- (id)init;

@end

