//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80236C40.hpp"



void fn_80256098(PPC::Runtime::GCContext* context)
{
/*80256098 00252E98*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025609C 00252E9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802560A0 00252EA0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802560A4 00252EA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802560A8 00252EA8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802560AC 00252EAC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802560B0 00252EB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x238, context->r31));
/*802560B4 00252EB4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23c, context->r31));
/*802560B8 00252EB8*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r7);
/*802560BC 00252EBC*/ PPC::Runtime::ASM::xor(context->r7, context->r8, context->r7);
/*802560C0 00252EC0*/ PPC::Runtime::ASM::or.(context->r0, context->r7, context->r0);
/*802560C4 00252EC4*/ PPC::Runtime::ASM::bne(.L_80256108);
/*802560C8 00252EC8*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*802560CC 00252ECC*/ PPC::Runtime::ASM::beq(.L_802560DC);
/*802560D0 00252ED0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r31));
/*802560D4 00252ED4*/ PPC::Runtime::ASM::clrlwi(context->r6, context->r0, 16);
/*802560D8 00252ED8*/ PPC::Runtime::ASM::b(.L_802560E4);
RUNTIME_PPC_JUMP_LABEL(.L_802560DC, 0x802560DC) //this is a jump label
/*802560DC 00252EDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22c, context->r31));
/*802560E0 00252EE0*/ PPC::Runtime::ASM::clrlwi(context->r6, context->r0, 16);
RUNTIME_PPC_JUMP_LABEL(.L_802560E4, 0x802560E4) //this is a jump label
/*802560E4 00252EE4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*802560E8 00252EE8*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 2);
/*802560EC 00252EEC*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r6, 16);
/*802560F0 00252EF0*/ PPC::Runtime::ASM::li(context->r6, 0xcf);
/*802560F4 00252EF4*/ PPC::Runtime::ASM::lwzx(context->r7, context->r7, context->r0);
/*802560F8 00252EF8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802560FC 00252EFC*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*80256100 00252F00*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23c, context->r31));
/*80256104 00252F04*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x238, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80256108, 0x80256108) //this is a jump label
/*80256108 00252F08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025610C 00252F0C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80256110 00252F10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80256114 00252F14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80256118 00252F18*/ PPC::Runtime::ASM::blr();
}