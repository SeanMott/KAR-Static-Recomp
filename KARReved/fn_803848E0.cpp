//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80384A98.hpp"
#include "fn_80384BB8.hpp"



void fn_803848E0(PPC::Runtime::GCContext* context)
{
/*803848E0 003816E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*803848E4 003816E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803848E8 003816E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*803848EC 003816EC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*803848F0 003816F0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*803848F4 003816F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*803848F8 003816F8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*803848FC 003816FC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80384900 00381700*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80384904 00381704*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80384908 00381708*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8038490C 0038170C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80384910 00381710*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80384914 00381714*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*80384918 00381718*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*8038491C 0038171C*/ PPC::Runtime::ASM::beq(.L_8038495C);
/*80384920 00381720*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*80384924 00381724*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80384928 00381728*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8038492C 0038172C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*80384930 00381730*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80384934 00381734*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80384938 00381738*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8038493C 0038173C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80384940 00381740*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80384944 00381744*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80384948 00381748*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8038494C 0038174C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80384950 00381750*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*80384954 00381754*/ PPC::Runtime::ASM::bl(fn_80384A98);
/*80384958 00381758*/ PPC::Runtime::ASM::b(.L_80384A58);
RUNTIME_PPC_JUMP_LABEL(.L_8038495C, 0x8038495C) //this is a jump label
/*8038495C 0038175C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80384960 00381760*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80384964 00381764*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC010 @ Get_MemoryOffset_SDA21);
/*80384968 00381768*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC008 @ Get_MemoryOffset_SDA21);
/*8038496C 0038176C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80384970 00381770*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80384974 00381774*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80384978 00381778*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8038497C 0038177C*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x20);
/*80384980 00381780*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80384984 00381784*/ PPC::Runtime::ASM::beq(.L_80384A50);
/*80384988 00381788*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BEFE4 @ Get_MemoryOffset_HighBit);
/*8038498C 0038178C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80384990 00381790*/ PPC::Runtime::ASM::addi(context->r12, context->r3, lbl_804BEFE4 @ Get_MemoryOffset_LowBit);
/*80384994 00381794*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80384998 00381798*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*8038499C 0038179C*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803849A0 003817A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803849A4 003817A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803849A8 003817A8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803849AC 003817AC*/ PPC::Runtime::ASM::bctrl();
/*803849B0 003817B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BF034 @ Get_MemoryOffset_HighBit);
/*803849B4 003817B4*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x10);
/*803849B8 003817B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BF034 @ Get_MemoryOffset_LowBit);
/*803849BC 003817BC*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*803849C0 003817C0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803849C4 003817C4*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*803849C8 003817C8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803849CC 003817CC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x4);
/*803849D0 003817D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803849D4 003817D4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*803849D8 003817D8*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*803849DC 003817DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803849E0 003817E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*803849E4 003817E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803849E8 003817E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*803849EC 003817EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803849F0 003817F0*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803849F4 003817F4*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803849F8 003817F8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803849FC 003817FC*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80384A00 00381800*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35, context->r1));
/*80384A04 00381804*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80384A08 00381808*/ PPC::Runtime::ASM::bl(fn_80384BB8);
/*80384A0C 0038180C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BF034 @ Get_MemoryOffset_HighBit);
/*80384A10 00381810*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BEFE4 @ Get_MemoryOffset_HighBit);
/*80384A14 00381814*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BF034 @ Get_MemoryOffset_LowBit);
/*80384A18 00381818*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80384A1C 0038181C*/ PPC::Runtime::ASM::addi(context->r12, context->r4, lbl_804BEFE4 @ Get_MemoryOffset_LowBit);
/*80384A20 00381820*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*80384A24 00381824*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80384A28 00381828*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80384A2C 0038182C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80384A30 00381830*/ PPC::Runtime::ASM::bctrl();
/*80384A34 00381834*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD9C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80384A38 00381838*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80384A3C 0038183C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBFF0 @ Get_MemoryOffset_SDA21);
/*80384A40 00381840*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBFE8 @ Get_MemoryOffset_SDA21);
/*80384A44 00381844*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80384A48 00381848*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80384A4C 0038184C*/ PPC::Runtime::ASM::b(.L_80384A54);
RUNTIME_PPC_JUMP_LABEL(.L_80384A50, 0x80384A50) //this is a jump label
/*80384A50 00381850*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80384A54, 0x80384A54) //this is a jump label
/*80384A54 00381854*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80384A58, 0x80384A58) //this is a jump label
/*80384A58 00381858*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*80384A5C 0038185C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80384A60 00381860*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80384A64 00381864*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80384A68 00381868*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80384A6C 0038186C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80384A70 00381870*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80384A74 00381874*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80384A78 00381878*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*80384A7C 0038187C*/ PPC::Runtime::ASM::blr();
}