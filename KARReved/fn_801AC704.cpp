//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FF94.hpp"
#include "fn_startCharge.hpp"
#include "fn_ground_chargeAnimation.hpp"
#include "fn_ground_Spin.hpp"
#include "fn_groundSpin2?.hpp"
#include "fn_doQuickSpin.hpp"



void fn_801AC704(PPC::Runtime::GCContext* context)
{
/*801AC704 001A9504*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AC708 001A9508*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AC70C 001A950C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AC710 001A9510*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AC714 001A9514*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AC718 001A9518*/ PPC::Runtime::ASM::bl(fn_8019FF94);
/*801AC71C 001A951C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC720 001A9520*/ PPC::Runtime::ASM::bl(fn_startCharge);
/*801AC724 001A9524*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC728 001A9528*/ PPC::Runtime::ASM::bne(.L_801AC760);
/*801AC72C 001A952C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC730 001A9530*/ PPC::Runtime::ASM::bl(fn_ground_chargeAnimation);
/*801AC734 001A9534*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC738 001A9538*/ PPC::Runtime::ASM::bne(.L_801AC760);
/*801AC73C 001A953C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC740 001A9540*/ PPC::Runtime::ASM::bl(fn_ground_Spin);
/*801AC744 001A9544*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC748 001A9548*/ PPC::Runtime::ASM::bl(fn_groundSpin2?);
/*801AC74C 001A954C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC750 001A9550*/ PPC::Runtime::ASM::bne(.L_801AC760);
/*801AC754 001A9554*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC758 001A9558*/ PPC::Runtime::ASM::bl(fn_doQuickSpin);
/*801AC75C 001A955C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801AC760, 0x801AC760) //this is a jump label
/*801AC760 001A9560*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AC764 001A9564*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AC768 001A9568*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AC76C 001A956C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AC770 001A9570*/ PPC::Runtime::ASM::blr();
}