//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface VSSpeechWordTimingInfo : NSObject <NSSecureCoding>
{
    double _startTime;
    _NSRange _textRange;
}

+ (id)utf16TimingInfoWithUTF8Range:(id)arg1 withText:(id)arg2;
+ (NSUInteger)extraBytesFromUTF8ToUTF16With:(const char )arg1 totalLength:(NSUInteger)arg2 begin:(NSUInteger)arg3 end:(NSUInteger)arg4;
+ (id)wordTimingInfoFrom:(id)arg1 timestamps:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) _NSRange textRange; // @synthesize textRange=_textRange;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

