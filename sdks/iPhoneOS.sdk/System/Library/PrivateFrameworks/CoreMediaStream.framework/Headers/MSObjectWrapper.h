//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSCoding, NSObject><NSCoding;

@interface MSObjectWrapper : NSObject
{
    long long _size;
    long long _uniqueID;
    id <NSObject><NSCoding> _object;
    int _errorCount;
}

+ (id)objectsFromWrappers:(id)arg1 equalToObject:(id)arg2;
+ (id)objectsFromWrappers:(id)arg1;
+ (long long)indexOfObject:(id)arg1 inWrapperArray:(id)arg2;
+ (id)wrapperWithObject:(id)arg1 size:(long long)arg2;
@property(nonatomic) int errorCount; // @synthesize errorCount=_errorCount;
@property(readonly, nonatomic) id <NSCoding> object; // @synthesize object=_object;
@property(nonatomic) long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) long long size; // @synthesize size=_size;
// - (void).cxx_destruct;
- (id)initWithObject:(id)arg1 size:(long long)arg2;

@end

