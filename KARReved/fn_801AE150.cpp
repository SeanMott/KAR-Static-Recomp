//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_801AEC28.hpp"
#include "fn_801AEA5C.hpp"



void fn_801AE150(PPC::Runtime::GCContext* context)
{
/*801AE150 001AAF50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AE154 001AAF54*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AE158 001AAF58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AE15C 001AAF5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AE160 001AAF60*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801AE164 001AAF64*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801AE168 001AAF68*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801AE16C 001AAF6C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AE170 001AAF70*/ PPC::Runtime::ASM::beq(.L_801AE234);
/*801AE174 001AAF74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r30));
/*801AE178 001AAF78*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x310, context->r3));
/*801AE17C 001AAF7C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801AE180 001AAF80*/ PPC::Runtime::ASM::bne(.L_801AE194);
/*801AE184 001AAF84*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F70 @ Get_MemoryOffset_SDA21);
/*801AE188 001AAF88*/ PPC::Runtime::ASM::li(context->r4, 0x2b8);
/*801AE18C 001AAF8C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6F78 @ Get_MemoryOffset_SDA21);
/*801AE190 001AAF90*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801AE194, 0x801AE194) //this is a jump label
/*801AE194 001AAF94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801AE198 001AAF98*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*801AE19C 001AAF9C*/ PPC::Runtime::ASM::beq(.L_801AE1B4);
/*801AE1A0 001AAFA0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AF668 @ Get_MemoryOffset_HighBit);
/*801AE1A4 001AAFA4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F70 @ Get_MemoryOffset_SDA21);
/*801AE1A8 001AAFA8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804AF668 @ Get_MemoryOffset_LowBit);
/*801AE1AC 001AAFAC*/ PPC::Runtime::ASM::li(context->r4, 0x2b9);
/*801AE1B0 001AAFB0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801AE1B4, 0x801AE1B4) //this is a jump label
/*801AE1B4 001AAFB4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1458 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801AE1B8 001AAFB8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*801AE1BC 001AAFBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801AE1C0 001AAFC0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801AE1C4 001AAFC4*/ PPC::Runtime::ASM::bne(.L_801AE210);
/*801AE1C8 001AAFC8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801AE1CC 001AAFCC*/ PPC::Runtime::ASM::beq(.L_801AE210);
/*801AE1D0 001AAFD0*/ PPC::Runtime::ASM::bne(.L_801AE1E4);
/*801AE1D4 001AAFD4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F70 @ Get_MemoryOffset_SDA21);
/*801AE1D8 001AAFD8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801AE1DC 001AAFDC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6F78 @ Get_MemoryOffset_SDA21);
/*801AE1E0 001AAFE0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801AE1E4, 0x801AE1E4) //this is a jump label
/*801AE1E4 001AAFE4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801AE1E8 001AAFE8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801AE1EC 001AAFEC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801AE1F0 001AAFF0*/ PPC::Runtime::ASM::bne(.L_801AE200);
/*801AE1F4 001AAFF4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801AE1F8 001AAFF8*/ PPC::Runtime::ASM::beq(.L_801AE200);
/*801AE1FC 001AAFFC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801AE200, 0x801AE200) //this is a jump label
/*801AE200 001AB000*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AE204 001AB004*/ PPC::Runtime::ASM::bne(.L_801AE210);
/*801AE208 001AB008*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AE20C 001AB00C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801AE210, 0x801AE210) //this is a jump label
/*801AE210 001AB010*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x93c, context->r30));
/*801AE214 001AB014*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801AE218 001AB018*/ PPC::Runtime::ASM::beq(.L_801AE228);
/*801AE21C 001AB01C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801AE220 001AB020*/ PPC::Runtime::ASM::bl(fn_801AEC28);
/*801AE224 001AB024*/ PPC::Runtime::ASM::b(.L_801AE234);
RUNTIME_PPC_JUMP_LABEL(.L_801AE228, 0x801AE228) //this is a jump label
/*801AE228 001AB028*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x940, context->r30));
/*801AE22C 001AB02C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801AE230 001AB030*/ PPC::Runtime::ASM::bl(fn_801AEA5C);
RUNTIME_PPC_JUMP_LABEL(.L_801AE234, 0x801AE234) //this is a jump label
/*801AE234 001AB034*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AE238 001AB038*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AE23C 001AB03C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801AE240 001AB040*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AE244 001AB044*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AE248 001AB048*/ PPC::Runtime::ASM::blr();
}