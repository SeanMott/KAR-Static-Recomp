//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"



void fn_80179940(PPC::Runtime::GCContext* context)
{
/*80179940 00176740*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80179944 00176744*/ PPC::Runtime::ASM::mflr(context->r0);
/*80179948 00176748*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8017994C 0017674C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80179950 00176750*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80179954 00176754*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80179958 00176758*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8017995C 0017675C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80179960 00176760*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80179964 00176764*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80179968 00176768*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8017996C 0017676C*/ PPC::Runtime::ASM::extsb(context->r4, context->r30);
/*80179970 00176770*/ PPC::Runtime::ASM::mulli(context->r5, context->r0, 0x64);
/*80179974 00176774*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80179978 00176778*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8017997C 0017677C*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x14);
/*80179980 00176780*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r5);
/*80179984 00176784*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*80179988 00176788*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8017998C 0017678C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc8, context->r3));
/*80179990 00176790*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80179994 00176794*/ PPC::Runtime::ASM::beq(.L_801799B8);
/*80179998 00176798*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8017999C 0017679C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801799A0 001767A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0CE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801799A4 001767A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801799A8 001767A8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801799AC 001767AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801799B0 001767B0*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*801799B4 001767B4*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_801799B8, 0x801799B8) //this is a jump label
/*801799B8 001767B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801799BC 001767BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801799C0 001767C0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801799C4 001767C4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801799C8 001767C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801799CC 001767CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801799D0 001767D0*/ PPC::Runtime::ASM::blr();
}