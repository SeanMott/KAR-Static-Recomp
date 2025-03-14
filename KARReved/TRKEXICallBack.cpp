//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSEnableScheduler.hpp"
#include "TRKLoadContext.hpp"



void TRKEXICallBack(PPC::Runtime::GCContext* context)
{
/*803C2734 003BF534*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803C2738 003BF538*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C273C 003BF53C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C2740 003BF540*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C2744 003BF544*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*803C2748 003BF548*/ PPC::Runtime::ASM::bl(OSEnableScheduler);
/*803C274C 003BF54C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803C2750 003BF550*/ PPC::Runtime::ASM::li(context->r4, 0x500);
/*803C2754 003BF554*/ PPC::Runtime::ASM::bl(TRKLoadContext);
/*803C2758 003BF558*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C275C 003BF55C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C2760 003BF560*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C2764 003BF564*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803C2768 003BF568*/ PPC::Runtime::ASM::blr();
}