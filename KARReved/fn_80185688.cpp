//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8013909C.hpp"
#include "fn_80059520.hpp"



void fn_80185688(PPC::Runtime::GCContext* context)
{
/*80185688 00182488*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8018568C 0018248C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80185690 00182490*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80185694 00182494*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80185698 00182498*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8018569C 0018249C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801856A0 001824A0*/ PPC::Runtime::ASM::bl(fn_8013909C);
/*801856A4 001824A4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AD788 @ Get_MemoryOffset_HighBit);
/*801856A8 001824A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801856AC 001824AC*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804AD788 @ Get_MemoryOffset_LowBit);
/*801856B0 001824B0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801856B4 001824B4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x1194);
/*801856B8 001824B8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801856BC 001824BC*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801856C0 001824C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801856C4 001824C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801856C8 001824C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801856CC 001824CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801856D0 001824D0*/ PPC::Runtime::ASM::blr();
}