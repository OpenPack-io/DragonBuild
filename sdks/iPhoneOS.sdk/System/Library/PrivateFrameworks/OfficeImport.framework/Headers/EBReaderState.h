//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EBState.h>

@class ECColumnWidthConvertor, OABReaderState;

__attribute__((visibility("hidden")))
@interface EBReaderState : EBState
{
    struct XlBinaryReader mXlReader;
    struct XlSheetInfoTable mXlSheetInfoTable;
    ECColumnWidthConvertor *mColumnWidthConvertor;
    struct XlEshObjectFactory mXlEshObjectFactory;
    OABReaderState *mOAState;
    BOOL mImportCSV;
}

@property(nonatomic) BOOL importCSV; // @synthesize importCSV=mImportCSV;
// - (void).cxx_destruct;
- (void)reportWarning:(id)arg1;
- (id)oaState;
- (id)columnWidthConvertor;
- (struct XlSheetInfoTable )xlSheetInfoTable;
- (void)readGlobalXlObjects;
- (struct XlBinaryReader )xlReader;
- (void)resumeReading;
- (void)pauseReading;
- (void)dealloc;
- (id)initWithXlReader:(struct XlBinaryReader )arg1 cancelDelegate:(id)arg2;

@end

