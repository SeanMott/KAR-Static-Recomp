//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8033D904.hpp"



void fn_8033BFC0(PPC::Runtime::GCContext* context)
{
/*8033BFC0 00338DC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8033BFC4 00338DC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8033BFC8 00338DC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8033BFCC 00338DCC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8033BFD0 00338DD0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8033BFD4 00338DD4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8033BFD8 00338DD8*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8033BFDC 00338DDC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033BFE0 00338DE0*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8033BFE4 00338DE4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8033BFE8 00338DE8*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8033BFEC 00338DEC*/ PPC::Runtime::ASM::b(.L_8033C008);
RUNTIME_PPC_JUMP_LABEL(.L_8033BFF0, 0x8033BFF0) //this is a jump label
/*8033BFF0 00338DF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r28));
/*8033BFF4 00338DF4*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8033BFF8 00338DF8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r31);
/*8033BFFC 00338DFC*/ PPC::Runtime::ASM::bl(fn_8033D904);
/*8033C000 00338E00*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*8033C004 00338E04*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8033C008, 0x8033C008) //this is a jump label
/*8033C008 00338E08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r28));
/*8033C00C 00338E0C*/ PPC::Runtime::ASM::cmplw(context->r30, context->r0);
/*8033C010 00338E10*/ PPC::Runtime::ASM::blt(.L_8033BFF0);
/*8033C014 00338E14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8033C018 00338E18*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8033C01C 00338E1C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8033C020 00338E20*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033C024 00338E24*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8033C028 00338E28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8033C02C 00338E2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8033C030 00338E30*/ PPC::Runtime::ASM::blr();
}