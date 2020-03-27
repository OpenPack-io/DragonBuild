//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class KNClassicStylesheetRecord, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface KNClassicThemeRecord : TSPObject
{
    NSString *_UUID;
    KNClassicStylesheetRecord *_stylesheetRecord;
    NSMutableArray *_masters;
}

// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct ClassicThemeRecordArchive )arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ClassicThemeRecordArchive )arg1 unarchiver:(id)arg2;
- (void)addMaster:(id)arg1;
@property(readonly, nonatomic) NSArray *masters;
- (id)initWithContext:(id)arg1;
@property(retain, nonatomic) KNClassicStylesheetRecord *stylesheetRecord;
@property(copy, nonatomic) NSString *UUID;

@end

