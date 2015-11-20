//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TabController.h"

@interface TabController (Persistence)
- (void)_restorePersistentDocumentState:(id)arg1 into:(id)arg2 withCurrentActiveDocument:(id)arg3 activeDocumentIsValid:(_Bool)arg4 restoredActiveDocumentIndex:(unsigned long long)arg5;
- (_Bool)readState;
- (void)saveStateInBackground:(_Bool)arg1;
- (id)_persistentStateDictionaryForTabs:(id)arg1;
- (void)saveStateInBackground:(_Bool)arg1 needsValidate:(_Bool)arg2;
- (void)_validateSavedState:(id)arg1;
- (void)_clearStateValidateTimer;
- (void)_saveStateFromTimer:(id)arg1;
- (void)_setSaveStateTimer:(id)arg1;
- (void)setStateNeedsSaved;
@end
