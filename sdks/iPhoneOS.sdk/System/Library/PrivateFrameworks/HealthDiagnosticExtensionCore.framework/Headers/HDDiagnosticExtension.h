//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DiagnosticExtensions/DEExtensionProvider.h>

#import <HealthDiagnosticExtensionCore/HDDiagnosticOperationDelegate-Protocol.h>

@class NSMutableString, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface HDDiagnosticExtension : DEExtensionProvider <HDDiagnosticOperationDelegate>
{
    double _captureStartTime;
    int _contentProtectionNotifyToken;
    NSObject<OS_dispatch_queue> *_logQueue;
    BOOL _allowsSensitiveAttachments;
    NSURL *_temporaryDirectoryURL;
    NSMutableString *_collectionLog;
}

@property(retain, nonatomic) NSMutableString *collectionLog; // @synthesize collectionLog=_collectionLog;
@property(readonly, nonatomic) BOOL allowsSensitiveAttachments; // @synthesize allowsSensitiveAttachments=_allowsSensitiveAttachments;
@property(readonly, copy, nonatomic) NSURL *temporaryDirectoryURL; // @synthesize temporaryDirectoryURL=_temporaryDirectoryURL;
// - (void).cxx_destruct;
- (id)_generateTemporaryAttachmentDirectory;
- (BOOL)_captureLog;
- (void)_logQueue_log:(id)arg1 timestamp:(double)arg2;
- (void)_log:(id)arg1;
- (void)_endMonitoringForContentProtectionStatus;
- (void)_beginMonitoringForContentProtectionStatus;
- (id)_currentProtectionStateString;
- (void)diagnosticOperation:(id)arg1 logMessage:(id)arg2;
- (id)attachmentsForParameters:(id)arg1;
- (id)init;

@end

