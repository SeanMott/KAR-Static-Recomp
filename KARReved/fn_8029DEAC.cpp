//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802889D0.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802889D0.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_8029C650.hpp"



void fn_8029DEAC(PPC::Runtime::GCContext* context)
{
/*8029DEAC 0029ACAC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*8029DEB0 0029ACB0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029DEB4 0029ACB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8029DEB8 0029ACB8*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8029DEBC 0029ACBC*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8029DEC0 0029ACC0*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8029DEC4 0029ACC4*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8029DEC8 0029ACC8*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8029DECC 0029ACCC*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*8029DED0 0029ACD0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8029DED4 0029ACD4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8029DED8 0029ACD8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8029DEDC 0029ACDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029DEE0 0029ACE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029DEE4 0029ACE4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029DEE8 0029ACE8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46, context->r5));
/*8029DEEC 0029ACEC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8029DEF0 0029ACF0*/ PPC::Runtime::ASM::bne(.L_8029E298);
/*8029DEF4 0029ACF4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8029DEF8 0029ACF8*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*8029DEFC 0029ACFC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x47, context->r5));
/*8029DF00 0029AD00*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8029DF04 0029AD04*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8029DF08 0029AD08*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E33A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029DF0C 0029AD0C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8029DF10 0029AD10*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8029DF14 0029AD14*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3394 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029DF18 0029AD18*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8029DF1C 0029AD1C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*8029DF20 0029AD20*/ PPC::Runtime::ASM::fdivs(context->f31, context->f1, context->f0);
/*8029DF24 0029AD24*/ PPC::Runtime::ASM::fmuls(context->f0, context->f31, context->f31);
/*8029DF28 0029AD28*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f0);
/*8029DF2C 0029AD2C*/ PPC::Runtime::ASM::beq(.L_8029DF44);
/*8029DF30 0029AD30*/ PPC::Runtime::ASM::bge(.L_8029DF38);
/*8029DF34 0029AD34*/ PPC::Runtime::ASM::b(.L_8029E0F0);
RUNTIME_PPC_JUMP_LABEL(.L_8029DF38, 0x8029DF38) //this is a jump label
/*8029DF38 0029AD38*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8029DF3C 0029AD3C*/ PPC::Runtime::ASM::bge(.L_8029E0F0);
/*8029DF40 0029AD40*/ PPC::Runtime::ASM::b(.L_8029E01C);
RUNTIME_PPC_JUMP_LABEL(.L_8029DF44, 0x8029DF44) //this is a jump label
/*8029DF44 0029AD44*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8029DF48 0029AD48*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7DCC @ Get_MemoryOffset_SDA21);
/*8029DF4C 0029AD4C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D7DD0 @ Get_MemoryOffset_SDA21);
/*8029DF50 0029AD50*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*8029DF54 0029AD54*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*8029DF58 0029AD58*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029DF5C 0029AD5C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029DF60 0029AD60*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*8029DF64 0029AD64*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029DF68 0029AD68*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029DF6C 0029AD6C*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f29);
/*8029DF70 0029AD70*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029DF74 0029AD74*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029DF78 0029AD78*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f29);
/*8029DF7C 0029AD7C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3384 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029DF80 0029AD80*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029DF84 0029AD84*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8029DF88 0029AD88*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7DC4 @ Get_MemoryOffset_SDA21);
/*8029DF8C 0029AD8C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7DB4 @ Get_MemoryOffset_SDA21);
/*8029DF90 0029AD90*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8029DF94 0029AD94*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8029DF98 0029AD98*/ PPC::Runtime::ASM::fmuls(context->f0, context->f30, context->f0);
/*8029DF9C 0029AD9C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8029DFA0 0029ADA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8029DFA4 0029ADA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8029DFA8 0029ADA8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8029DFAC 0029ADAC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029DFB0 0029ADB0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8029DFB4 0029ADB4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029DFB8 0029ADB8*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*8029DFBC 0029ADBC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029DFC0 0029ADC0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029DFC4 0029ADC4*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f29);
/*8029DFC8 0029ADC8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029DFCC 0029ADCC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029DFD0 0029ADD0*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f29);
/*8029DFD4 0029ADD4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3384 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029DFD8 0029ADD8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029DFDC 0029ADDC*/ PPC::Runtime::ASM::fmuls(context->f30, context->f0, context->f2);
/*8029DFE0 0029ADE0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029DFE4 0029ADE4*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*8029DFE8 0029ADE8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029DFEC 0029ADEC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029DFF0 0029ADF0*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f29);
/*8029DFF4 0029ADF4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029DFF8 0029ADF8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029DFFC 0029ADFC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8029E000 0029AE00*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f29);
/*8029E004 0029AE04*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3384 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E008 0029AE08*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f30);
/*8029E00C 0029AE0C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*8029E010 0029AE10*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8029E014 0029AE14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8029E018 0029AE18*/ PPC::Runtime::ASM::b(.L_8029E0F0);
RUNTIME_PPC_JUMP_LABEL(.L_8029E01C, 0x8029E01C) //this is a jump label
/*8029E01C 0029AE1C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8029E020 0029AE20*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7DD4 @ Get_MemoryOffset_SDA21);
/*8029E024 0029AE24*/ PPC::Runtime::ASM::li(context->r4, lbl_805D7DD8 @ Get_MemoryOffset_SDA21);
/*8029E028 0029AE28*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*8029E02C 0029AE2C*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*8029E030 0029AE30*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E034 0029AE34*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E038 0029AE38*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*8029E03C 0029AE3C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E040 0029AE40*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E044 0029AE44*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*8029E048 0029AE48*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E04C 0029AE4C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E050 0029AE50*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f30);
/*8029E054 0029AE54*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3384 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E058 0029AE58*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E05C 0029AE5C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8029E060 0029AE60*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7DC4 @ Get_MemoryOffset_SDA21);
/*8029E064 0029AE64*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7DB4 @ Get_MemoryOffset_SDA21);
/*8029E068 0029AE68*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8029E06C 0029AE6C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8029E070 0029AE70*/ PPC::Runtime::ASM::fmuls(context->f0, context->f29, context->f0);
/*8029E074 0029AE74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8029E078 0029AE78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8029E07C 0029AE7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8029E080 0029AE80*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8029E084 0029AE84*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E088 0029AE88*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8029E08C 0029AE8C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E090 0029AE90*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*8029E094 0029AE94*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E098 0029AE98*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E09C 0029AE9C*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*8029E0A0 0029AEA0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E0A4 0029AEA4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E0A8 0029AEA8*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f30);
/*8029E0AC 0029AEAC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3384 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E0B0 0029AEB0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E0B4 0029AEB4*/ PPC::Runtime::ASM::fmuls(context->f29, context->f0, context->f2);
/*8029E0B8 0029AEB8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E0BC 0029AEBC*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*8029E0C0 0029AEC0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E0C4 0029AEC4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E0C8 0029AEC8*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*8029E0CC 0029AECC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E0D0 0029AED0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E0D4 0029AED4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8029E0D8 0029AED8*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f30);
/*8029E0DC 0029AEDC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3384 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E0E0 0029AEE0*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f29);
/*8029E0E4 0029AEE4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*8029E0E8 0029AEE8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8029E0EC 0029AEEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8029E0F0, 0x8029E0F0) //this is a jump label
/*8029E0F0 0029AEF0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E0F4 0029AEF4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8029E0F8 0029AEF8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7DC4 @ Get_MemoryOffset_SDA21);
/*8029E0FC 0029AEFC*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7DB4 @ Get_MemoryOffset_SDA21);
/*8029E100 0029AF00*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8029E104 0029AF04*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8029E108 0029AF08*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029E10C 0029AF0C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E110 0029AF10*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E114 0029AF14*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8029E118 0029AF18*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E11C 0029AF1C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E120 0029AF20*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*8029E124 0029AF24*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E128 0029AF28*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E12C 0029AF2C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*8029E130 0029AF30*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3398 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E134 0029AF34*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E339C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E138 0029AF38*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8029E13C 0029AF3C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E140 0029AF40*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7DC4 @ Get_MemoryOffset_SDA21);
/*8029E144 0029AF44*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*8029E148 0029AF48*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7DB4 @ Get_MemoryOffset_SDA21);
/*8029E14C 0029AF4C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8029E150 0029AF50*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8029E154 0029AF54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8029E158 0029AF58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8029E15C 0029AF5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029E160 0029AF60*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8029E164 0029AF64*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E168 0029AF68*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8029E16C 0029AF6C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E170 0029AF70*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8029E174 0029AF74*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E178 0029AF78*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E17C 0029AF7C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*8029E180 0029AF80*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E184 0029AF84*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E188 0029AF88*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*8029E18C 0029AF8C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3398 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E190 0029AF90*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E194 0029AF94*/ PPC::Runtime::ASM::fmuls(context->f29, context->f0, context->f2);
/*8029E198 0029AF98*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E19C 0029AF9C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8029E1A0 0029AFA0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E1A4 0029AFA4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E1A8 0029AFA8*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*8029E1AC 0029AFAC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E1B0 0029AFB0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E1B4 0029AFB4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029E1B8 0029AFB8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f31);
/*8029E1BC 0029AFBC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3398 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E1C0 0029AFC0*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f29);
/*8029E1C4 0029AFC4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E1C8 0029AFC8*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*8029E1CC 0029AFCC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*8029E1D0 0029AFD0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8029E1D4 0029AFD4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E1D8 0029AFD8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8029E1DC 0029AFDC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E1E0 0029AFE0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E1E4 0029AFE4*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*8029E1E8 0029AFE8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E1EC 0029AFEC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E1F0 0029AFF0*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*8029E1F4 0029AFF4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3398 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E1F8 0029AFF8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E339C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E1FC 0029AFFC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8029E200 0029B000*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E204 0029B004*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7DC4 @ Get_MemoryOffset_SDA21);
/*8029E208 0029B008*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*8029E20C 0029B00C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7DB4 @ Get_MemoryOffset_SDA21);
/*8029E210 0029B010*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8029E214 0029B014*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8029E218 0029B018*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029E21C 0029B01C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029E220 0029B020*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029E224 0029B024*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8029E228 0029B028*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E22C 0029B02C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8029E230 0029B030*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E234 0029B034*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8029E238 0029B038*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E23C 0029B03C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E240 0029B040*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*8029E244 0029B044*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E248 0029B048*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E24C 0029B04C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*8029E250 0029B050*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3398 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E254 0029B054*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E258 0029B058*/ PPC::Runtime::ASM::fmuls(context->f29, context->f0, context->f2);
/*8029E25C 0029B05C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E260 0029B060*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8029E264 0029B064*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E268 0029B068*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E26C 0029B06C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*8029E270 0029B070*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E274 0029B074*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8029E278 0029B078*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029E27C 0029B07C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*8029E280 0029B080*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3398 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E284 0029B084*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f29);
/*8029E288 0029B088*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*8029E28C 0029B08C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8029E290 0029B090*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*8029E294 0029B094*/ PPC::Runtime::ASM::b(.L_8029E2B8);
RUNTIME_PPC_JUMP_LABEL(.L_8029E298, 0x8029E298) //this is a jump label
/*8029E298 0029B098*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E29C 0029B09C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8029E2A0 0029B0A0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7DC4 @ Get_MemoryOffset_SDA21);
/*8029E2A4 0029B0A4*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7DB4 @ Get_MemoryOffset_SDA21);
/*8029E2A8 0029B0A8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8029E2AC 0029B0AC*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8029E2B0 0029B0B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3378 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029E2B4 0029B0B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8029E2B8, 0x8029E2B8) //this is a jump label
/*8029E2B8 0029B0B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8029E2BC 0029B0BC*/ PPC::Runtime::ASM::bl(fn_8029C650);
/* 8029E2C0 0029B0C0  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8029E2C4 0029B0C4*/ PPC::Runtime::ASM::beq(.L_8029E2D0);
/*8029E2C8 0029B0C8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8029E2CC 0029B0CC*/ PPC::Runtime::ASM::b(.L_8029E304);
RUNTIME_PPC_JUMP_LABEL(.L_8029E2D0, 0x8029E2D0) //this is a jump label
/*8029E2D0 0029B0D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8029E2D4 0029B0D4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x50);
/*8029E2D8 0029B0D8*/ PPC::Runtime::ASM::ble(.L_8029E300);
/*8029E2DC 0029B0DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8029E2E0 0029B0E0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8029E2E4 0029B0E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8029E2E8 0029B0E8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8029E2EC 0029B0EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8029E2F0 0029B0F0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029E2F4 0029B0F4*/ PPC::Runtime::ASM::bctrl();
/*8029E2F8 0029B0F8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8029E2FC 0029B0FC*/ PPC::Runtime::ASM::b(.L_8029E304);
RUNTIME_PPC_JUMP_LABEL(.L_8029E300, 0x8029E300) //this is a jump label
/*8029E300 0029B100*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8029E304, 0x8029E304) //this is a jump label
/*8029E304 0029B104*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8029E308 0029B108*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8029E30C 0029B10C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8029E310 0029B110*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8029E314 0029B114*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*8029E318 0029B118*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8029E31C 0029B11C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8029E320 0029B120*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8029E324 0029B124*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8029E328 0029B128*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029E32C 0029B12C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*8029E330 0029B130*/ PPC::Runtime::ASM::blr();
}