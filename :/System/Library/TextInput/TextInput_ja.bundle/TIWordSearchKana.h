/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:57:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearch.h>

@class NSDictionary, TIWordSearchCandidateResultSet;

@interface TIWordSearchKana : TIWordSearch {

	NSDictionary* _kanaromapat;
	NSDictionary* _kanaroma;
	unsigned long long _insertKatakanaAtIndex;
	/*^block*/id _addressBookLoader;
	TIWordSearchCandidateResultSet* _candidateResultSet;

}

@property (nonatomic,retain) TIWordSearchCandidateResultSet * candidateResultSet;              //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
+(id)dynamicDictionaryFileNames;
-(void)dealloc;
-(TIWordSearchCandidateResultSet *)candidateResultSet;
-(void)setCandidateResultSet:(TIWordSearchCandidateResultSet *)arg1 ;
-(BOOL)_insertString:(id)arg1 input:(id)arg2 at:(unsigned long long)arg3 force:(BOOL)arg4 ;
-(BOOL)isAnalyzingJapaneseRomaji;
-(void)setInsertKatakanaAtIndex:(unsigned long long)arg1 ;
-(BOOL)_insertKatakana:(id)arg1 reading:(id)arg2 at:(unsigned long long)arg3 ;
-(id)makeCandidates:(id)arg1 contextString:(id)arg2 predictionEnabled:(BOOL)arg3 reanalysisMode:(BOOL)arg4 withInputManager:(id)arg5 geometryModelData:(id)arg6 flickUsed:(BOOL)arg7 ;
-(id)kanaSearchPat:(id)arg1 ;
-(id)kanaRomaPat:(id)arg1 ;
-(void)clearObservers;
-(void)updateMecabraState;
-(unsigned long long)mecabraCreationOptions;
-(int)mecabraInputMethodType;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
@end

