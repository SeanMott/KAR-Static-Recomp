//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022C568.hpp"
#include "fn_8022C5C0.hpp"
#include "fn_8022CE94.hpp"
#include "fn_80009534.hpp"
#include "fn_800094FC.hpp"
#include "fn_8022CB8C.hpp"
#include "fn_80223184.hpp"
#include "fn_802264F4.hpp"
#include "fn_802230C4.hpp"



void fn_800F3904(PPC::Runtime::GCContext* context)
{
/*800F3904 000F0704*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F3908 000F0708*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F390C 000F070C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F3910 000F0710*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F3914 000F0714*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800F3918 000F0718*/ PPC::Runtime::ASM::lhz(context->r0, SkipAddress_65 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F391C 000F071C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800F3920 000F0720*/ PPC::Runtime::ASM::bne(.L_800F3A98);
/*800F3924 000F0724*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*800F3928 000F0728*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_800F392C, 0x800F392C) //this is a jump label
/*800F392C 000F072C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD70C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3930 000F0730*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r30);
/*800F3934 000F0734*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46, context->r4));
/*800F3938 000F0738*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*800F393C 000F073C*/ PPC::Runtime::ASM::bne(.L_800F3A1C);
/*800F3940 000F0740*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F3944 000F0744*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800F3948 000F0748*/ PPC::Runtime::ASM::bl(fn_8022C568);
/*800F394C 000F074C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD70C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3950 000F0750*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F3954 000F0754*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r30);
/*800F3958 000F0758*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x1c);
/*800F395C 000F075C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x28);
/*800F3960 000F0760*/ PPC::Runtime::ASM::bl(fn_8022C5C0);
/*800F3964 000F0764*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD70C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3968 000F0768*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x34);
/*800F396C 000F076C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F3970 000F0770*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*800F3974 000F0774*/ PPC::Runtime::ASM::bl(fn_8022CE94);
/*800F3978 000F0778*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F397C 000F077C*/ PPC::Runtime::ASM::bl(fn_80009534);
/*800F3980 000F0780*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD70C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3984 000F0784*/ PPC::Runtime::ASM::extsb(context->r5, context->r3);
/*800F3988 000F0788*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x40);
/*800F398C 000F078C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F3990 000F0790*/ PPC::Runtime::ASM::sthx(context->r5, context->r4, context->r0);
/*800F3994 000F0794*/ PPC::Runtime::ASM::bl(fn_800094FC);
/*800F3998 000F0798*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD70C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F399C 000F079C*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x42);
/*800F39A0 000F07A0*/ PPC::Runtime::ASM::sthx(context->r3, context->r4, context->r0);
/*800F39A4 000F07A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F39A8 000F07A8*/ PPC::Runtime::ASM::bl(fn_8022CB8C);
/*800F39AC 000F07AC*/ PPC::Runtime::ASM::subfic(context->r0, context->r3, 0x7);
/*800F39B0 000F07B0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD70C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F39B4 000F07B4*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*800F39B8 000F07B8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x44);
/*800F39BC 000F07BC*/ PPC::Runtime::ASM::extrwi(context->r4, context->r0, 8, 19);
/*800F39C0 000F07C0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r5);
/*800F39C4 000F07C4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*800F39C8 000F07C8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF7BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F39CC 000F07CC*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r5);
/*800F39D0 000F07D0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800F39D4 000F07D4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD70C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F39D8 000F07D8*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r5);
/*800F39DC 000F07DC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*800F39E0 000F07E0*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r5);
/*800F39E4 000F07E4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD70C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F39E8 000F07E8*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r30);
/*800F39EC 000F07EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800F39F0 000F07F0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800F39F4 000F07F4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*800F39F8 000F07F8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800F39FC 000F07FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800F3A00 000F0800*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800F3A04 000F0804*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*800F3A08 000F0808*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800F3A0C 000F080C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*800F3A10 000F0810*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800F3A14 000F0814*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*800F3A18 000F0818*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800F3A1C, 0x800F3A1C) //this is a jump label
/*800F3A1C 000F081C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*800F3A20 000F0820*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x48);
/*800F3A24 000F0824*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*800F3A28 000F0828*/ PPC::Runtime::ASM::blt(.L_800F392C);
/*800F3A2C 000F082C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3A30 000F0830*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*800F3A34 000F0834*/ PPC::Runtime::ASM::b(.L_800F3A90);
RUNTIME_PPC_JUMP_LABEL(.L_800F3A38, 0x800F3A38) //this is a jump label
/*800F3A38 000F0838*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800F3A3C 000F083C*/ PPC::Runtime::ASM::bl(fn_80223184);
/*800F3A40 000F0840*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*800F3A44 000F0844*/ PPC::Runtime::ASM::bne(.L_800F3A8C);
/*800F3A48 000F0848*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800F3A4C 000F084C*/ PPC::Runtime::ASM::bl(fn_802264F4);
/*800F3A50 000F0850*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800F3A54 000F0854*/ PPC::Runtime::ASM::beq(.L_800F3A8C);
/*800F3A58 000F0858*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800F3A5C 000F085C*/ PPC::Runtime::ASM::bl(fn_802230C4);
/*800F3A60 000F0860*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*800F3A64 000F0864*/ PPC::Runtime::ASM::beq(.L_800F3A8C);
/*800F3A68 000F0868*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0x48);
/*800F3A6C 000F086C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD70C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3A70 000F0870*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*800F3A74 000F0874*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46, context->r4));
/*800F3A78 000F0878*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r4));
/*800F3A7C 000F087C*/ PPC::Runtime::ASM::subfic(context->r3, context->r3, 0x1);
/*800F3A80 000F0880*/ PPC::Runtime::ASM::cntlzw(context->r3, context->r3);
/*800F3A84 000F0884*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 1, 25, 25);
/*800F3A88 000F0888*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800F3A8C, 0x800F3A8C) //this is a jump label
/*800F3A8C 000F088C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800F3A90, 0x800F3A90) //this is a jump label
/*800F3A90 000F0890*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800F3A94 000F0894*/ PPC::Runtime::ASM::bne(.L_800F3A38);
RUNTIME_PPC_JUMP_LABEL(.L_800F3A98, 0x800F3A98) //this is a jump label
/*800F3A98 000F0898*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3A9C 000F089C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*800F3AA0 000F08A0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800F3AA4 000F08A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*800F3AA8 000F08A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F3AAC 000F08AC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800F3AB0 000F08B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F3AB4 000F08B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F3AB8 000F08B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F3ABC 000F08BC*/ PPC::Runtime::ASM::blr();
}