/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@import Cocoa;
#import <ThemeKit/TKTypes.h>
#import <ThemeKit/TKStructs.h>

@interface CUIRenditionKey : NSObject <NSCopying, NSCoding>
{
    struct renditionkeytoken _stackKey[16];
    struct renditionkeytoken *_key;
    unsigned short _highwaterKeyCount;
}

+ (instancetype)renditionKeyWithKeyList:(const struct renditionkeytoken *)keyList;
+ (instancetype)renditionKey;

- (instancetype)initWithThemeElement:(long long)arg1
                           themePart:(long long)arg2
                           themeSize:(long long)arg3
                      themeDirection:(CoreThemeDirection)arg4
                          themeValue:(CoreThemeValue)arg5
                     themeDimension1:(long long)arg6
                     themeDimension2:(long long)arg7
                          themeState:(CoreThemeState)arg8
              themePresentationState:(CoreThemePresentationState)arg9
                          themeLayer:(CoreThemeLayer)arg10
                          themeScale:(long long)arg11
                     themeIdentifier:(long long)arg12;

- (instancetype)initWithKeyList:(const struct renditionkeytoken *)arg1;

- (NSString *)descriptionBasedOnKeyFormat:(const struct renditionkeyfmt *)format;
- (NSString *)nameOfAttributeName:(TKThemeAttribute)arg1;

- (long long)themeIdentifier;
- (void)setThemeIdentifier:(long long)arg1;

- (long long)themeGraphicsClass;
- (void)setThemeGraphicsClass:(long long)arg1;

- (long long)themeMemoryClass;
- (void)setThemeMemoryClass:(long long)arg1;

- (long long)themeSizeClassVertical;
- (void)setThemeSizeClassVertical:(long long)arg1;

- (long long)themeSizeClassHorizontal;
- (void)setThemeSizeClassHorizontal:(long long)arg1;

- (CoreThemeLayout)themeSubtype;
- (void)setThemeSubtype:(CoreThemeLayout)arg1;

- (CoreThemeIdiom)themeIdiom;
- (void)setThemeIdiom:(CoreThemeIdiom)arg1;

- (long long)themeScale;
- (void)setThemeScale:(long long)arg1;

- (CoreThemeLayer)themeLayer;
- (void)setThemeLayer:(CoreThemeLayer)arg1;

- (CoreThemePresentationState)themePresentationState;
- (void)setThemePresentationState:(CoreThemePresentationState)arg1;

- (long long)themePreviousState;
- (void)setThemePreviousState:(long long)arg1;

- (CoreThemeState)themeState;
- (void)setThemeState:(CoreThemeState)arg1;

- (long long)themeDimension2;
- (void)setThemeDimension2:(long long)arg1;

- (long long)themeDimension1;
- (void)setThemeDimension1:(long long)arg1;

- (long long)themePreviousValue;
- (void)setThemePreviousValue:(long long)arg1;

- (CoreThemeValue)themeValue;
- (void)setThemeValue:(CoreThemeValue)arg1;

- (CoreThemeDirection)themeDirection;
- (void)setThemeDirection:(CoreThemeDirection)arg1;

- (CoreThemeSize)themeSize;
- (void)setThemeSize:(CoreThemeSize)arg1;

- (long long)themePart;
- (void)setThemePart:(long long)arg1;

- (long long)themeElement;
- (void)setThemeElement:(long long)arg1;

- (long long)themeDeploymentTarget;
- (void)setThemeDeploymentTarget:(long long)arg1;

- (long long)themeAppearance;
- (void)setThemeAppearance:(long long)arg1;

- (long long)themeLocalization;
- (void)setThemeLocalization:(long long)arg1;

-(long long)themeGlyphSize;
-(void)setThemeGlyphSize:(long long)arg1;

-(long long)themeGlyphWeight;
-(void)setThemeGlyphWeight:(long long)arg1;

- (const struct renditionkeytoken *)keyList;
- (void)removeValueForKeyTokenIdentifier:(long long)arg1;
- (void)copyValuesFromKeyList:(const struct renditionkeytoken *)arg1;
- (void)setValuesFromKeyList:(const struct renditionkeytoken *)arg1;

- (void)_expandKeyIfNecessaryForCount:(long long)arg1;
- (unsigned short)_systemTokenCount;

@end

