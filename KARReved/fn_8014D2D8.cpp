//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801389D8.hpp"



void fn_8014D2D8(PPC::Runtime::GCContext* context)
{
/*8014D2D8 0014A0D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8014D2DC 0014A0DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014D2E0 0014A0E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014D2E4 0014A0E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014D2E8 0014A0E8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014D2EC 0014A0EC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014D2F0 0014A0F0*/ PPC::Runtime::ASM::mr(context->r6, context->r3);
/*8014D2F4 0014A0F4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r3));
/*8014D2F8 0014A0F8*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8014D2FC 0014A0FC*/ PPC::Runtime::ASM::beq(.L_8014D33C);
/*8014D300 0014A100*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8014D304 0014A104*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*8014D308 0014A108*/ PPC::Runtime::ASM::xoris(context->r4, context->r0, 0x8000);
/*8014D30C 0014A10C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r5));
/*8014D310 0014A110*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8014D314 0014A114*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014D318 0014A118*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0608 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014D31C 0014A11C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8014D320 0014A120*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0600 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014D324 0014A124*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*8014D328 0014A128*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8014D32C 0014A12C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x440, context->r6));
/*8014D330 0014A130*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*8014D334 0014A134*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8014D338 0014A138*/ PPC::Runtime::ASM::bl(fn_801389D8);
RUNTIME_PPC_JUMP_LABEL(.L_8014D33C, 0x8014D33C) //this is a jump label
/*8014D33C 0014A13C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014D340 0014A140*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014D344 0014A144*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014D348 0014A148*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8014D34C 0014A14C*/ PPC::Runtime::ASM::blr();
}