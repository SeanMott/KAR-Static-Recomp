//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80061B08(PPC::Runtime::GCContext* context)
{
/*80061B08 0005E908*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80061B0C 0005E90C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80061B10 0005E910*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80061B14 0005E914*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80061B18 0005E918*/ PPC::Runtime::ASM::li(context->r31, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_80061B1C, 0x80061B1C) //this is a jump label
/*80061B1C 0005E91C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80061B20 0005E920*/ PPC::Runtime::ASM::bl(fn_80444FE0);
/*80061B24 0005E924*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80061B28 0005E928*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x3e);
/*80061B2C 0005E92C*/ PPC::Runtime::ASM::ble(.L_80061B1C);
/*80061B30 0005E930*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80061B34 0005E934*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80061B38 0005E938*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80061B3C 0005E93C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80061B40 0005E940*/ PPC::Runtime::ASM::blr();
}