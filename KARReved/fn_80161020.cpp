//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800550BC.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80160F18.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80138BA4.hpp"



void fn_80161020(PPC::Runtime::GCContext* context)
{
/*80161020 0015DE20*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80161024 0015DE24*/ PPC::Runtime::ASM::mflr(context->r0);
/*80161028 0015DE28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8016102C 0015DE2C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80161030 0015DE30*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80161034 0015DE34*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80161038 0015DE38*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8016103C 0015DE3C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80161040 0015DE40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80161044 0015DE44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80161048 0015DE48*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8016104C 0015DE4C*/ PPC::Runtime::ASM::blt(.L_80161068);
/*80161050 0015DE50*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80161054 0015DE54*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0968 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80161058 0015DE58*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016105C 0015DE5C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80161060 0015DE60*/ PPC::Runtime::ASM::bl(fn_800550BC);
/*80161064 0015DE64*/ PPC::Runtime::ASM::b(.L_80161398);
RUNTIME_PPC_JUMP_LABEL(.L_80161068, 0x80161068) //this is a jump label
/*80161068 0015DE68*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8016106C 0015DE6C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80161070 0015DE70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80161074 0015DE74*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80161078 0015DE78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8016107C 0015DE7C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80161080 0015DE80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80161084 0015DE84*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*80161088 0015DE88*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0978 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016108C 0015DE8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80161090 0015DE90*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E096C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80161094 0015DE94*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80161098 0015DE98*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8016109C 0015DE9C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801610A0 0015DEA0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*801610A4 0015DEA4*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*801610A8 0015DEA8*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801610AC 0015DEAC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801610B0 0015DEB0*/ PPC::Runtime::ASM::cmpwi(context->r29, -0xa);
/*801610B4 0015DEB4*/ PPC::Runtime::ASM::ble(.L_801610C8);
/*801610B8 0015DEB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*801610BC 0015DEBC*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*801610C0 0015DEC0*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*801610C4 0015DEC4*/ PPC::Runtime::ASM::b(.L_801610E4);
RUNTIME_PPC_JUMP_LABEL(.L_801610C8, 0x801610C8) //this is a jump label
/*801610C8 0015DEC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*801610CC 0015DECC*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*801610D0 0015DED0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*801610D4 0015DED4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*801610D8 0015DED8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801610DC 0015DEDC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0968 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801610E0 0015DEE0*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_801610E4, 0x801610E4) //this is a jump label
/*801610E4 0015DEE4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0xa);
/*801610E8 0015DEE8*/ PPC::Runtime::ASM::bge(.L_801610F4);
/*801610EC 0015DEEC*/ PPC::Runtime::ASM::cmpwi(context->r29, -0xa);
/*801610F0 0015DEF0*/ PPC::Runtime::ASM::bgt(.L_8016114C);
RUNTIME_PPC_JUMP_LABEL(.L_801610F4, 0x801610F4) //this is a jump label
/*801610F4 0015DEF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*801610F8 0015DEF8*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*801610FC 0015DEFC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*80161100 0015DF00*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*80161104 0015DF04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*80161108 0015DF08*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6667);
/* 8016110C 0015DF0C  7C A0 E8 96 */ mulhw context->r5 , context->r0 , context->r29
/*80161110 0015DF10*/ PPC::Runtime::ASM::srawi(context->r0, context->r5, 2);
/*80161114 0015DF14*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*80161118 0015DF18*/ PPC::Runtime::ASM::add.(context->r0, context->r0, context->r4);
/*8016111C 0015DF1C*/ PPC::Runtime::ASM::bge(.L_80161134);
/*80161120 0015DF20*/ PPC::Runtime::ASM::srawi(context->r0, context->r5, 2);
/*80161124 0015DF24*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*80161128 0015DF28*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*8016112C 0015DF2C*/ PPC::Runtime::ASM::neg(context->r4, context->r0);
/*80161130 0015DF30*/ PPC::Runtime::ASM::b(.L_80161140);
RUNTIME_PPC_JUMP_LABEL(.L_80161134, 0x80161134) //this is a jump label
/*80161134 0015DF34*/ PPC::Runtime::ASM::srawi(context->r0, context->r5, 2);
/*80161138 0015DF38*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*8016113C 0015DF3C*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_80161140, 0x80161140) //this is a jump label
/*80161140 0015DF40*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0968 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80161144 0015DF44*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*80161148 0015DF48*/ PPC::Runtime::ASM::b(.L_80161188);
RUNTIME_PPC_JUMP_LABEL(.L_8016114C, 0x8016114C) //this is a jump label
/*8016114C 0015DF4C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*80161150 0015DF50*/ PPC::Runtime::ASM::bge(.L_8016117C);
/*80161154 0015DF54*/ PPC::Runtime::ASM::cmpwi(context->r29, -0xa);
/*80161158 0015DF58*/ PPC::Runtime::ASM::ble(.L_8016117C);
/*8016115C 0015DF5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*80161160 0015DF60*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80161164 0015DF64*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*80161168 0015DF68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*8016116C 0015DF6C*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*80161170 0015DF70*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0968 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80161174 0015DF74*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*80161178 0015DF78*/ PPC::Runtime::ASM::b(.L_80161188);
RUNTIME_PPC_JUMP_LABEL(.L_8016117C, 0x8016117C) //this is a jump label
/*8016117C 0015DF7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*80161180 0015DF80*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80161184 0015DF84*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
RUNTIME_PPC_JUMP_LABEL(.L_80161188, 0x80161188) //this is a jump label
/*80161188 0015DF88*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*8016118C 0015DF8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*80161190 0015DF90*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6667);
/* 80161194 0015DF94  7C A0 E8 96 */ mulhw context->r5 , context->r0 , context->r29
/*80161198 0015DF98*/ PPC::Runtime::ASM::srawi(context->r0, context->r5, 2);
/*8016119C 0015DF9C*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*801611A0 0015DFA0*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*801611A4 0015DFA4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*801611A8 0015DFA8*/ PPC::Runtime::ASM::subf.(context->r0, context->r0, context->r29);
/*801611AC 0015DFAC*/ PPC::Runtime::ASM::bge(.L_801611CC);
/*801611B0 0015DFB0*/ PPC::Runtime::ASM::srawi(context->r0, context->r5, 2);
/*801611B4 0015DFB4*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*801611B8 0015DFB8*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*801611BC 0015DFBC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*801611C0 0015DFC0*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r29);
/*801611C4 0015DFC4*/ PPC::Runtime::ASM::neg(context->r4, context->r0);
/*801611C8 0015DFC8*/ PPC::Runtime::ASM::b(.L_801611E0);
RUNTIME_PPC_JUMP_LABEL(.L_801611CC, 0x801611CC) //this is a jump label
/*801611CC 0015DFCC*/ PPC::Runtime::ASM::srawi(context->r0, context->r5, 2);
/*801611D0 0015DFD0*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*801611D4 0015DFD4*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*801611D8 0015DFD8*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*801611DC 0015DFDC*/ PPC::Runtime::ASM::subf(context->r4, context->r0, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_801611E0, 0x801611E0) //this is a jump label
/*801611E0 0015DFE0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0968 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801611E4 0015DFE4*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*801611E8 0015DFE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801611EC 0015DFEC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*801611F0 0015DFF0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801611F4 0015DFF4*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*801611F8 0015DFF8*/ PPC::Runtime::ASM::bl(fn_80160F18);
/*801611FC 0015DFFC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80161200 0015E000*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0970 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80161204 0015E004*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80161208 0015E008*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8016120C 0015E00C*/ PPC::Runtime::ASM::bne(.L_80161398);
/*80161210 0015E010*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80161214 0015E014*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80161218 0015E018*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8016121C 0015E01C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80161220 0015E020*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E0978 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80161224 0015E024*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80161228 0015E028*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E096C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016122C 0015E02C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80161230 0015E030*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0968 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80161234 0015E034*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80161238 0015E038*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016123C 0015E03C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80161240 0015E040*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*80161244 0015E044*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80161248 0015E048*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8016124C 0015E04C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80161250 0015E050*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80161254 0015E054*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80161258 0015E058*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*8016125C 0015E05C*/ PPC::Runtime::ASM::cmpwi(context->r31, -0xa);
/*80161260 0015E060*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*80161264 0015E064*/ PPC::Runtime::ASM::ble(.L_80161278);
/*80161268 0015E068*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*8016126C 0015E06C*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80161270 0015E070*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*80161274 0015E074*/ PPC::Runtime::ASM::b(.L_80161294);
RUNTIME_PPC_JUMP_LABEL(.L_80161278, 0x80161278) //this is a jump label
/*80161278 0015E078*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*8016127C 0015E07C*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80161280 0015E080*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*80161284 0015E084*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*80161288 0015E088*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8016128C 0015E08C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0968 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80161290 0015E090*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_80161294, 0x80161294) //this is a jump label
/*80161294 0015E094*/ PPC::Runtime::ASM::cmpwi(context->r31, 0xa);
/*80161298 0015E098*/ PPC::Runtime::ASM::bge(.L_801612A4);
/*8016129C 0015E09C*/ PPC::Runtime::ASM::cmpwi(context->r31, -0xa);
/*801612A0 0015E0A0*/ PPC::Runtime::ASM::bgt(.L_801612FC);
RUNTIME_PPC_JUMP_LABEL(.L_801612A4, 0x801612A4) //this is a jump label
/*801612A4 0015E0A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*801612A8 0015E0A8*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*801612AC 0015E0AC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*801612B0 0015E0B0*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*801612B4 0015E0B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*801612B8 0015E0B8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6667);
/* 801612BC 0015E0BC  7C A0 F8 96 */ mulhw context->r5 , context->r0 , context->r31
/*801612C0 0015E0C0*/ PPC::Runtime::ASM::srawi(context->r0, context->r5, 2);
/*801612C4 0015E0C4*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*801612C8 0015E0C8*/ PPC::Runtime::ASM::add.(context->r0, context->r0, context->r4);
/*801612CC 0015E0CC*/ PPC::Runtime::ASM::bge(.L_801612E4);
/*801612D0 0015E0D0*/ PPC::Runtime::ASM::srawi(context->r0, context->r5, 2);
/*801612D4 0015E0D4*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*801612D8 0015E0D8*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*801612DC 0015E0DC*/ PPC::Runtime::ASM::neg(context->r4, context->r0);
/*801612E0 0015E0E0*/ PPC::Runtime::ASM::b(.L_801612F0);
RUNTIME_PPC_JUMP_LABEL(.L_801612E4, 0x801612E4) //this is a jump label
/*801612E4 0015E0E4*/ PPC::Runtime::ASM::srawi(context->r0, context->r5, 2);
/*801612E8 0015E0E8*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*801612EC 0015E0EC*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_801612F0, 0x801612F0) //this is a jump label
/*801612F0 0015E0F0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0968 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801612F4 0015E0F4*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*801612F8 0015E0F8*/ PPC::Runtime::ASM::b(.L_80161338);
RUNTIME_PPC_JUMP_LABEL(.L_801612FC, 0x801612FC) //this is a jump label
/*801612FC 0015E0FC*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*80161300 0015E100*/ PPC::Runtime::ASM::bge(.L_8016132C);
/*80161304 0015E104*/ PPC::Runtime::ASM::cmpwi(context->r31, -0xa);
/*80161308 0015E108*/ PPC::Runtime::ASM::ble(.L_8016132C);
/*8016130C 0015E10C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*80161310 0015E110*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80161314 0015E114*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*80161318 0015E118*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*8016131C 0015E11C*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*80161320 0015E120*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0968 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80161324 0015E124*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*80161328 0015E128*/ PPC::Runtime::ASM::b(.L_80161338);
RUNTIME_PPC_JUMP_LABEL(.L_8016132C, 0x8016132C) //this is a jump label
/*8016132C 0015E12C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*80161330 0015E130*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80161334 0015E134*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
RUNTIME_PPC_JUMP_LABEL(.L_80161338, 0x80161338) //this is a jump label
/*80161338 0015E138*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*8016133C 0015E13C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*80161340 0015E140*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6667);
/* 80161344 0015E144  7C A0 F8 96 */ mulhw context->r5 , context->r0 , context->r31
/*80161348 0015E148*/ PPC::Runtime::ASM::srawi(context->r0, context->r5, 2);
/*8016134C 0015E14C*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*80161350 0015E150*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*80161354 0015E154*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*80161358 0015E158*/ PPC::Runtime::ASM::subf.(context->r0, context->r0, context->r31);
/*8016135C 0015E15C*/ PPC::Runtime::ASM::bge(.L_8016137C);
/*80161360 0015E160*/ PPC::Runtime::ASM::srawi(context->r0, context->r5, 2);
/*80161364 0015E164*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*80161368 0015E168*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*8016136C 0015E16C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*80161370 0015E170*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r31);
/*80161374 0015E174*/ PPC::Runtime::ASM::neg(context->r4, context->r0);
/*80161378 0015E178*/ PPC::Runtime::ASM::b(.L_80161390);
RUNTIME_PPC_JUMP_LABEL(.L_8016137C, 0x8016137C) //this is a jump label
/*8016137C 0015E17C*/ PPC::Runtime::ASM::srawi(context->r0, context->r5, 2);
/*80161380 0015E180*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*80161384 0015E184*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*80161388 0015E188*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*8016138C 0015E18C*/ PPC::Runtime::ASM::subf(context->r4, context->r0, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_80161390, 0x80161390) //this is a jump label
/*80161390 0015E190*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0968 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80161394 0015E194*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_80161398, 0x80161398) //this is a jump label
/*80161398 0015E198*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8016139C 0015E19C*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*801613A0 0015E1A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801613A4 0015E1A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801613A8 0015E1A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*801613AC 0015E1AC*/ PPC::Runtime::ASM::blr();
}