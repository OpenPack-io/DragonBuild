//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/_UIDocumentPickerContainerModel.h>

#import <CloudDocsUI/_UIArrayControllerDelegate-Protocol.h>

@class NSArray, NSOperationQueue, NSString, NSURL, _UIArrayController;
@protocol _UIDocumentPickerDirectoryObserver;

@interface _UIDocumentPickerURLContainerModel : _UIDocumentPickerContainerModel <_UIArrayControllerDelegate>
{
    double _startObservingTime;
    NSOperationQueue *_presentedItemOperationQueue;
    NSArray *_modelObjects;
    NSArray *_pickableTypes;
    NSUInteger _pickerMode;
    NSURL *_url;
    NSString *_displayTitle;
    struct _UIArrayController _observer;
    id _urlObserver;
}

+ (void)_tagColorsDidChange;
+ (id)_tagBlipColors;
+ (id)allTags;
+ (id)tagColorsByTag;
@property(retain, nonatomic) id urlObserver; // @synthesize urlObserver=_urlObserver;
@property(retain, nonatomic) _UIArrayController<_UIDocumentPickerDirectoryObserver> *observer; // @synthesize observer=_observer;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) NSUInteger pickerMode; // @synthesize pickerMode=_pickerMode;
@property(copy, nonatomic) NSArray *pickableTypes; // @synthesize pickableTypes=_pickableTypes;
@property(retain, nonatomic) NSArray *modelObjects; // @synthesize modelObjects=_modelObjects;
// - (void).cxx_destruct;
- (void)updateObserverForURL:(id)arg1;
- (BOOL)afterInitialUpdate;
@property(readonly, copy) NSString *description;
- (void)callUpdateHandlerWithNewItems:(id)arg1 diff:(id)arg2;
- (void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3;
- (BOOL)shouldShowContainerForType:(id)arg1;
- (BOOL)shouldAllowPickingType:(id)arg1;
- (BOOL)shouldEnableContainer:(id)arg1;
- (void)refreshItem:(id)arg1 thumbnailOnly:(BOOL)arg2;
- (void)updateSortDescriptors;
- (void)stopMonitoringChanges;
- (id)scopes;
- (struct _UIArrayController )_createObserver;
- (void)startMonitoringChanges;
- (void)dealloc;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(NSUInteger)arg3;
- (id)init;

@end

