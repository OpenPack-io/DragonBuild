//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCard.h>


@class NSURL;

@interface PARAsyncCard : SFCard <NSSecureCoding>
{
    double _scale;
    NSUInteger _clientQueryId;
}

+ (BOOL)supportsSecureCoding;
+ (id)cardWithTitle:(id)arg1 url:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(NSUInteger)arg5 clientQueryId:(NSUInteger)arg6;
+ (id)cardWithTitle:(id)arg1 url:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(NSUInteger)arg5;
@property(readonly, nonatomic) NSUInteger clientQueryId; // @synthesize clientQueryId=_clientQueryId;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, copy, nonatomic) NSURL *cardURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

