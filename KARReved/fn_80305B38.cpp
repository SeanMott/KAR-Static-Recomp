//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80305CC8.hpp"
#include "fn_8036B714.hpp"
#include "fn_8029B2E0.hpp"



void fn_80305B38(PPC::Runtime::GCContext* context)
{
/*80305B38 00302938*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80305B3C 0030293C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80305B40 00302940*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80305B44 00302944*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80305B48 00302948*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*80305B4C 0030294C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80305B50 00302950*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*80305B54 00302954*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80305B58 00302958*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80305B5C 0030295C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80305B60 00302960*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80305B64 00302964*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD98C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80305B68 00302968*/ PPC::Runtime::ASM::bl(fn_80305CC8);
/*80305B6C 0030296C*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x8);
/*80305B70 00302970*/ PPC::Runtime::ASM::addic.(context->r4, context->r3, 0x8);
/*80305B74 00302974*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80305B78 00302978*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80305B7C 0030297C*/ PPC::Runtime::ASM::beq(.L_80305B8C);
/*80305B80 00302980*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*80305B84 00302984*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80305B88 00302988*/ PPC::Runtime::ASM::bl(fn_8036B714);
RUNTIME_PPC_JUMP_LABEL(.L_80305B8C, 0x80305B8C) //this is a jump label
/*80305B8C 0030298C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80305B90 00302990*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80305B94 00302994*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80305B98 00302998*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80305B9C 0030299C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80305BA0 003029A0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80305BA4 003029A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80305BA8 003029A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80305BAC 003029AC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80305BB0 003029B0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80305BB4 003029B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80305BB8 003029B8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80305BBC 003029BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80305BC0 003029C0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80305BC4 003029C4*/ PPC::Runtime::ASM::b(.L_80305BCC);
/*80305BC8 003029C8*/ PPC::Runtime::ASM::bl(fn_8029B2E0);
RUNTIME_PPC_JUMP_LABEL(.L_80305BCC, 0x80305BCC) //this is a jump label
/*80305BCC 003029CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80305BD0 003029D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80305BD4 003029D4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80305BD8 003029D8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80305BDC 003029DC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80305BE0 003029E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80305BE4 003029E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80305BE8 003029E8*/ PPC::Runtime::ASM::blr();
}