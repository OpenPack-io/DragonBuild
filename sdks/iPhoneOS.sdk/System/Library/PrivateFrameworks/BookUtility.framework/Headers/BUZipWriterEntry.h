//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface BUZipWriterEntry : NSObject
{
    unsigned int _CRC;
    NSString *_name;
    NSDate *_lastModificationDate;
    NSUInteger _size;
    NSUInteger _offset;
}

@property(nonatomic) unsigned int CRC; // @synthesize CRC=_CRC;
@property(nonatomic) NSUInteger offset; // @synthesize offset=_offset;
@property(nonatomic) NSUInteger size; // @synthesize size=_size;
@property(retain, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;

@end

