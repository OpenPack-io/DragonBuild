//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray, NSMutableDictionary, _UIDictionaryManager;

__attribute__((visibility("hidden")))
@interface _UIRemoteDictionaryViewController : UITableViewController
{
    NSArray *_availableDictionaries;
    _UIDictionaryManager *_dictionaryAssetManager;
    NSMutableDictionary *_downloadingAssets;
}

@property(retain, nonatomic) NSMutableDictionary *downloadingAssets; // @synthesize downloadingAssets=_downloadingAssets;
@property(retain, nonatomic) _UIDictionaryManager *dictionaryAssetManager; // @synthesize dictionaryAssetManager=_dictionaryAssetManager;
// - (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_startDownloadForDictionary:(id)arg1;
- (void)_handleDownloadButton:(id)arg1;
- (id)_downloadButton;
- (id)_downloadImageWithTintColor:(id)arg1;
- (id)_cloudBackgroundImage;
- (id)_downloadArrowImage;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

@end

