//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface STSiriModelObject : NSObject <NSSecureCoding>
{
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)_aceCollectionClass;
- (id)_aceContextObjectValue;
- (void)setIdentifier:(id)arg1;
- (id)identifier;

@end

