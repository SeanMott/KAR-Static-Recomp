//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80392398.hpp"
#include "fn_80399458.hpp"
#include "fn_80399244.hpp"



void fn_803991C8(PPC::Runtime::GCContext* context)
{
/*803991C8 00395FC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803991CC 00395FCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803991D0 00395FD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803991D4 00395FD4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x18);
/*803991D8 00395FD8*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x14);
/*803991DC 00395FDC*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x10);
/*803991E0 00395FE0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803991E4 00395FE4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803991E8 00395FE8*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0xc);
/*803991EC 00395FEC*/ PPC::Runtime::ASM::addi(context->r9, context->r1, 0x8);
/*803991F0 00395FF0*/ PPC::Runtime::ASM::bl(fn_80392398);
/*803991F4 00395FF4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803991F8 00395FF8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803991FC 00395FFC*/ PPC::Runtime::ASM::cmpwi(context->r7, -0x1);
/*80399200 00396000*/ PPC::Runtime::ASM::beq(.L_80399218);
/*80399204 00396004*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80399208 00396008*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8039920C 0039600C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80399210 00396010*/ PPC::Runtime::ASM::bl(fn_80399458);
/*80399214 00396014*/ PPC::Runtime::ASM::b(.L_80399230);
RUNTIME_PPC_JUMP_LABEL(.L_80399218, 0x80399218) //this is a jump label
/*80399218 00396018*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8039921C 0039601C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80399220 00396020*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80399224 00396024*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80399228 00396028*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039922C 0039602C*/ PPC::Runtime::ASM::bl(fn_80399244);
RUNTIME_PPC_JUMP_LABEL(.L_80399230, 0x80399230) //this is a jump label
/*80399230 00396030*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80399234 00396034*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80399238 00396038*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039923C 0039603C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80399240 00396040*/ PPC::Runtime::ASM::blr();
}