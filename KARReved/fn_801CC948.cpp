//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80192908.hpp"
#include "fn_80245C10.hpp"
#include "fn_802463A8.hpp"
#include "fn_80245C10.hpp"



void fn_801CC948(PPC::Runtime::GCContext* context)
{
/*801CC948 001C9748*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801CC94C 001C974C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CC950 001C9750*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CC954 001C9754*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CC958 001C9758*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801CC95C 001C975C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801CC960 001C9760*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801CC964 001C9764*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*801CC968 001C9768*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801CC96C 001C976C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*801CC970 001C9770*/ PPC::Runtime::ASM::beq(.L_801CC97C);
/*801CC974 001C9774*/ PPC::Runtime::ASM::bl(fn_80192908);
/*801CC978 001C9778*/ PPC::Runtime::ASM::b(.L_801CC980);
RUNTIME_PPC_JUMP_LABEL(.L_801CC97C, 0x801CC97C) //this is a jump label
/*801CC97C 001C977C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801CC980, 0x801CC980) //this is a jump label
/*801CC980 001C9780*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r30));
/*801CC984 001C9784*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x3e8);
/*801CC988 001C9788*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46c, context->r30));
/*801CC98C 001C978C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x43c);
/*801CC990 001C9790*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x448);
/*801CC994 001C9794*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*801CC998 001C9798*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*801CC99C 001C979C*/ PPC::Runtime::ASM::bl(fn_80245C10);
/*801CC9A0 001C97A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r30));
/*801CC9A4 001C97A4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x10);
/*801CC9A8 001C97A8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x1c);
/*801CC9AC 001C97AC*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x28);
/*801CC9B0 001C97B0*/ PPC::Runtime::ASM::bl(fn_802463A8);
/*801CC9B4 001C97B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x700, context->r30));
/*801CC9B8 001C97B8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801CC9BC 001C97BC*/ PPC::Runtime::ASM::beq(.L_801CC9E0);
/*801CC9C0 001C97C0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801CC9C4 001C97C4*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x3e8);
/*801CC9C8 001C97C8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1A30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CC9CC 001C97CC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x43c);
/*801CC9D0 001C97D0*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x448);
/*801CC9D4 001C97D4*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*801CC9D8 001C97D8*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*801CC9DC 001C97DC*/ PPC::Runtime::ASM::bl(fn_80245C10);
RUNTIME_PPC_JUMP_LABEL(.L_801CC9E0, 0x801CC9E0) //this is a jump label
/*801CC9E0 001C97E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CC9E4 001C97E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CC9E8 001C97E8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801CC9EC 001C97EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CC9F0 001C97F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801CC9F4 001C97F4*/ PPC::Runtime::ASM::blr();
}