//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801EB84C.hpp"
#include "fn_801D4A04.hpp"
#include "fn_801D4A04.hpp"
#include "fn_801D4A04.hpp"
#include "fn_801D4A04.hpp"
#include "fn_801D4A04.hpp"
#include "fn_801D4A04.hpp"



void fn_801E90C4(PPC::Runtime::GCContext* context)
{
/*801E90C4 001E5EC4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E90C8 001E5EC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E90CC 001E5ECC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E90D0 001E5ED0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E90D4 001E5ED4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801E90D8 001E5ED8*/ PPC::Runtime::ASM::bl(fn_801EB84C);
/*801E90DC 001E5EDC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E90E0 001E5EE0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc74);
/*801E90E4 001E5EE4*/ PPC::Runtime::ASM::bl(fn_801D4A04);
/*801E90E8 001E5EE8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E90EC 001E5EEC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x15a4);
/*801E90F0 001E5EF0*/ PPC::Runtime::ASM::bl(fn_801D4A04);
/*801E90F4 001E5EF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E90F8 001E5EF8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xec0);
/*801E90FC 001E5EFC*/ PPC::Runtime::ASM::bl(fn_801D4A04);
/*801E9100 001E5F00*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E9104 001E5F04*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x110c);
/*801E9108 001E5F08*/ PPC::Runtime::ASM::bl(fn_801D4A04);
/*801E910C 001E5F0C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E9110 001E5F10*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x1358);
/*801E9114 001E5F14*/ PPC::Runtime::ASM::bl(fn_801D4A04);
/*801E9118 001E5F18*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E911C 001E5F1C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x17f0);
/*801E9120 001E5F20*/ PPC::Runtime::ASM::bl(fn_801D4A04);
/*801E9124 001E5F24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E9128 001E5F28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E912C 001E5F2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E9130 001E5F30*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E9134 001E5F34*/ PPC::Runtime::ASM::blr();
}