//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8039A878.hpp"
#include "fn_8039A878.hpp"



void fn_803A23D8(PPC::Runtime::GCContext* context)
{
/*803A23D8 0039F1D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803A23DC 0039F1DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803A23E0 0039F1E0*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC548 @ Get_MemoryOffset_SDA21);
/*803A23E4 0039F1E4*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC510 @ Get_MemoryOffset_SDA21);
/*803A23E8 0039F1E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A23EC 0039F1EC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803A23F0 0039F1F0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803A23F4 0039F1F4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A23F8 0039F1F8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803A23FC 0039F1FC*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803A2400 0039F200*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A2404 0039F204*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803A2408 0039F208*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*803A240C 0039F20C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803A2410 0039F210*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 803A2414 0039F214  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A2418 0039F218*/ PPC::Runtime::ASM::beq(.L_803A2430);
/*803A241C 0039F21C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*803A2420 0039F220*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A2424 0039F224*/ PPC::Runtime::ASM::beq(.L_803A2430);
/*803A2428 0039F228*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803A242C 0039F22C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803A2430, 0x803A2430) //this is a jump label
/*803A2430 0039F230*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803A2434 0039F234*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*803A2438 0039F238*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 803A243C 0039F23C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A2440 0039F240*/ PPC::Runtime::ASM::beq(.L_803A2460);
/*803A2444 0039F244*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*803A2448 0039F248*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*803A244C 0039F24C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803A2450 0039F250*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*803A2454 0039F254*/ PPC::Runtime::ASM::bge(.L_803A2460);
/*803A2458 0039F258*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*803A245C 0039F25C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803A2460, 0x803A2460) //this is a jump label
/*803A2460 0039F260*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A2464 0039F264*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803A2468 0039F268*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A246C 0039F26C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803A2470 0039F270*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803A2474 0039F274*/ PPC::Runtime::ASM::blr();
}