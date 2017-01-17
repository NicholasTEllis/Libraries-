//
//  DMNLibrary.h
//  Libraries
//
//  Created by Nicholas Ellis on 1/17/17.
//  Copyright © 2017 Nicholas Ellis. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DMNLibrary : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSURL *homepageURL;
@property (nonatomic) NSInteger *numberOfStars;
- (instancetype)initWithName:(NSString *)name andSummary:(NSString *)summary andLanguage:(NSString *)language andHomepageURL:(NSURL *)homepageURL andNumberOfStars:(NSInteger *)numberOfStars;

@end
