//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBIconIndexNode-Protocol.h>
#import <SpringBoardHome/SBTreeNode-Protocol.h>

@class NSArray, NSHashTable, NSString;
@protocol SBIconDelegate, SBTreeNode;

@interface SBIcon : NSObject <SBTreeNode, SBIconIndexNode, BSDescriptionProviding, NSCopying>
{
    id _badgeNumberOrString;
    NSHashTable *_observers;
    BOOL _uninstalled;
    id <SBTreeNode> _parent;
    id <SBIconDelegate> _delegate;
    NSString *_iconFileSizeDescription;
}

+ (Class)downloadingIconClass;
+ (BOOL)hasIconImage;
+ (BOOL)forcesBackgroundIconGeneration;
+ (BOOL)canGenerateIconsInBackground;
+ (id)iconImageFromUnmaskedImage:(id)arg1 info:(struct SBIconImageInfo)arg2;
@property(readonly, nonatomic, getter=isUninstalled) BOOL uninstalled; // @synthesize uninstalled=_uninstalled;
@property(readonly, nonatomic) NSString *iconFileSizeDescription; // @synthesize iconFileSizeDescription=_iconFileSizeDescription;
@property(nonatomic) __weak id <SBIconDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SBTreeNode> parent; // @synthesize parent=_parent;
// - (void).cxx_destruct;
- (void)_notifyLaunchEnabledDidChange;
- (void)_notifyAccessoriesDidUpdate;
- (void)_notifyImageDidUpdate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)possibleUserTapDidCancel;
- (void)possibleUserTapBeganWithAbsoluteTime:(NSUInteger)arg1 andContinuousTime:(NSUInteger)arg2;
- (id)iconSizeDescription;
@property(readonly, nonatomic) NSString *iconCategoryDescription;
@property(readonly, nonatomic) BOOL canBeAddedToMultiItemDrag;
@property(readonly, nonatomic) BOOL canReceiveGrabbedIcon;
@property(readonly, copy, nonatomic) NSString *folderFallbackTitle;
@property(readonly, copy, nonatomic) NSArray *folderTitleOptions;
@property(readonly, nonatomic, getter=isTimedOut) BOOL timedOut;
@property(readonly, copy, nonatomic) NSString *uninstallAlertCancelTitle;
@property(readonly, copy, nonatomic) NSString *uninstallAlertConfirmTitle;
@property(readonly, copy, nonatomic) NSString *uninstallAlertBody;
@property(readonly, copy, nonatomic) NSString *uninstallAlertTitle;
- (void)setUninstalled;
- (void)completeUninstall;
@property(readonly, nonatomic, getter=isUninstallSupported) BOOL uninstallSupported;
@property(readonly, nonatomic) BOOL shouldAnimateProgress;
@property(readonly, nonatomic, getter=isProgressPaused) BOOL progressPaused;
@property(readonly, nonatomic) double progressPercent;
@property(readonly, nonatomic) long long progressState;
- (void)launchFromLocation:(id)arg1 context:(id)arg2;
@property(readonly, copy, nonatomic) NSString *automationID;
@property(readonly, nonatomic) long long labelAccessoryType;
- (void)setBadge:(id)arg1;
- (void)noteBadgeDidChange;
- (long long)accessoryTypeForLocation:(id)arg1;
- (id)accessoryTextForLocation:(id)arg1;
@property(readonly, nonatomic) id badgeNumberOrString;
@property(readonly, nonatomic) long long badgeValue;
- (void)reloadIconImage;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)iconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)displayNameForObscuredDisabledLaunchForLocation:(id)arg1;
@property(readonly, nonatomic, getter=isLaunchDisabledForObscuredReason) BOOL launchDisabledForObscuredReason;
@property(readonly, nonatomic, getter=isLaunchEnabled) BOOL launchEnabled;
@property(readonly, copy, nonatomic) NSArray *tags;
- (long long)localizedCompareDisplayNames:(id)arg1;
@property(readonly, nonatomic) BOOL canTightenLabel;
@property(readonly, nonatomic) BOOL canTruncateLabel;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)descriptionForLocation:(id)arg1;
- (id)displayNameForLocation:(id)arg1;
- (void)localeChanged;
@property(readonly, nonatomic) BOOL shouldWarmUp;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(NSUInteger)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
- (void)ancestryDidChange;
- (void)removeChild:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
- (void)enumerateObserversUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)hasObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;
- (Class)iconImageViewClassForLocation:(id)arg1;
- (BOOL)assumesAppInstallFinishedForFolderProgress;
- (id)downloadingIconDataSource;
- (BOOL)isDownloadingIcon;
- (id)representedSceneIdentifier;
- (id)masqueradeIdentifier;
- (id)applicationBundleID;
- (id)leafIdentifier;
- (BOOL)isLeafIcon;
- (id)parentFolderIcon;
- (id)folder;
- (BOOL)isFolderIcon;
- (BOOL)isGrabbedIconPlaceholder;
- (BOOL)isPlaceholder;

@end

