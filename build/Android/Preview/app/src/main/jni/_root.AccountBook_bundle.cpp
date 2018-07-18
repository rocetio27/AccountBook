// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/AccountBook.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[10];

namespace g{

// public static generated class AccountBook_bundle :0
// {
// static AccountBook_bundle() :0
static void AccountBook_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    AccountBook_bundle::BudgetPagecc02de38_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[1/*"budgetpage-...*/]);
    AccountBook_bundle::Clickd3560fbe_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[2/*"click-fcdf7...*/]);
    AccountBook_bundle::InputPage7ad7b1e5_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[3/*"inputpage-e...*/]);
    AccountBook_bundle::lArrowc76aec54_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[4/*"larrow-d6b0...*/]);
    AccountBook_bundle::ListPage5d08328d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[5/*"listpage-74...*/]);
    AccountBook_bundle::MainView22996bfa_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[6/*"mainview-44...*/]);
    AccountBook_bundle::NotoSansBoldd01b0e45_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[7/*"notosans-bo...*/]);
    AccountBook_bundle::rArrowd43ec882_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[8/*"rarrow-0521...*/]);
    AccountBook_bundle::StatisticPagef553aba9_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[9/*"statisticpa...*/]);
}

static void AccountBook_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("AccountBook");
    ::STRINGS[1] = uString::Const("budgetpage-39eed14b.js");
    ::STRINGS[2] = uString::Const("click-fcdf70de.wav");
    ::STRINGS[3] = uString::Const("inputpage-ebd5eae4.js");
    ::STRINGS[4] = uString::Const("larrow-d6b09855.png");
    ::STRINGS[5] = uString::Const("listpage-743727c4.js");
    ::STRINGS[6] = uString::Const("mainview-44606d5f.js");
    ::STRINGS[7] = uString::Const("notosans-bold-00b26036.ttf");
    ::STRINGS[8] = uString::Const("rarrow-05210d33.png");
    ::STRINGS[9] = uString::Const("statisticpage-c1eb852a.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::BudgetPagecc02de38_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::Clickd3560fbe_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::InputPage7ad7b1e5_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::lArrowc76aec54_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::ListPage5d08328d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::MainView22996bfa_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::NotoSansBoldd01b0e45_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::rArrowd43ec882_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::StatisticPagef553aba9_, uFieldFlagsStatic);
    type->Reflection.SetFields(9,
        new uField("BudgetPagecc02de38", 0),
        new uField("Clickd3560fbe", 1),
        new uField("InputPage7ad7b1e5", 2),
        new uField("lArrowc76aec54", 3),
        new uField("ListPage5d08328d", 4),
        new uField("MainView22996bfa", 5),
        new uField("NotoSansBoldd01b0e45", 6),
        new uField("rArrowd43ec882", 7),
        new uField("StatisticPagef553aba9", 8));
}

uClassType* AccountBook_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("AccountBook_bundle", options);
    type->fp_build_ = AccountBook_bundle_build;
    type->fp_cctor_ = AccountBook_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::BudgetPagecc02de38_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::Clickd3560fbe_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::InputPage7ad7b1e5_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::lArrowc76aec54_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::ListPage5d08328d_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::MainView22996bfa_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::NotoSansBoldd01b0e45_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::rArrowd43ec882_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::StatisticPagef553aba9_;
// }

} // ::g
