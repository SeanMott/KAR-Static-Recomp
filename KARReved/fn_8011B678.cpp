//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112044.hpp"
#include "fn_80112050.hpp"
#include "fn_80059520.hpp"



void fn_8011B678(PPC::Runtime::GCContext* context)
{
/*8011B678 00118478*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8011B67C 0011847C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011B680 00118480*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011B684 00118484*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011B688 00118488*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011B68C 0011848C*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011B690 00118490*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8011B694 00118494*/ PPC::Runtime::ASM::bl(fn_80112050);
/*8011B698 00118498*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1061 @ Get_MemoryOffset_HighBit);
/*8011B69C 0011849C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8011B6A0 001184A0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1061 @ Get_MemoryOffset_LowBit);
/*8011B6A4 001184A4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8011B6A8 001184A8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x238);
/*8011B6AC 001184AC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8011B6B0 001184B0*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8011B6B4 001184B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011B6B8 001184B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011B6BC 001184BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011B6C0 001184C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8011B6C4 001184C4*/ PPC::Runtime::ASM::blr();
}