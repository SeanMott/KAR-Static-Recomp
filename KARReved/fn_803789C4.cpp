//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80061224.hpp"
#include "fn_8005DB44.hpp"
#include "fn_8005E108.hpp"
#include "fn_8005F688.hpp"
#include "fn_8005FCA0.hpp"



void fn_803789C4(PPC::Runtime::GCContext* context)
{
/*803789C4 003757C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*803789C8 003757C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803789CC 003757CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*803789D0 003757D0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*803789D4 003757D4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*803789D8 003757D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*803789DC 003757DC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*803789E0 003757E0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803789E4 003757E4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*803789E8 003757E8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803789EC 003757EC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803789F0 003757F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803789F4 003757F4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBB70 @ Get_MemoryOffset_SDA21);
/*803789F8 003757F8*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBB68 @ Get_MemoryOffset_SDA21);
/*803789FC 003757FC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80378A00 00375800*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80378A04 00375804*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_60 @ Get_MemoryOffset_HighBit);
/*80378A08 00375808*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80378A0C 0037580C*/ PPC::Runtime::ASM::addi(context->r6, context->r4, MemoryOffset_60 @ Get_MemoryOffset_LowBit);
/*80378A10 00375810*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*80378A14 00375814*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80378A18 00375818*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80378A1C 0037581C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80378A20 00375820*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80378A24 00375824*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80378A28 00375828*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80378A2C 0037582C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80378A30 00375830*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80378A34 00375834*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*80378A38 00375838*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xc);
/*80378A3C 0037583C*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*80378A40 00375840*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80378A44 00375844*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378A48 00375848*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f0);
/*80378A4C 0037584C*/ PPC::Runtime::ASM::ble(.L_80378A58);
/*80378A50 00375850*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r30));
/*80378A54 00375854*/ PPC::Runtime::ASM::b(.L_80378A5C);
RUNTIME_PPC_JUMP_LABEL(.L_80378A58, 0x80378A58) //this is a jump label
/*80378A58 00375858*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80378A5C, 0x80378A5C) //this is a jump label
/*80378A5C 0037585C*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80378A60 00375860*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378A64 00375864*/ PPC::Runtime::ASM::fcmpo(cr0, context->f6, context->f0);
/*80378A68 00375868*/ PPC::Runtime::ASM::ble(.L_80378A74);
/*80378A6C 0037586C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r30));
/*80378A70 00375870*/ PPC::Runtime::ASM::b(.L_80378A78);
RUNTIME_PPC_JUMP_LABEL(.L_80378A74, 0x80378A74) //this is a jump label
/*80378A74 00375874*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80378A78, 0x80378A78) //this is a jump label
/*80378A78 00375878*/ PPC::Runtime::ASM::lfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80378A7C 0037587C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378A80 00375880*/ PPC::Runtime::ASM::fcmpo(cr0, context->f7, context->f0);
/*80378A84 00375884*/ PPC::Runtime::ASM::ble(.L_80378A90);
/*80378A88 00375888*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r30));
/*80378A8C 0037588C*/ PPC::Runtime::ASM::b(.L_80378A94);
RUNTIME_PPC_JUMP_LABEL(.L_80378A90, 0x80378A90) //this is a jump label
/*80378A90 00375890*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80378A94, 0x80378A94) //this is a jump label
/*80378A94 00375894*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378A98 00375898*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f0);
/*80378A9C 0037589C*/ PPC::Runtime::ASM::bge(.L_80378AA8);
/*80378AA0 003758A0*/ PPC::Runtime::ASM::fneg(context->f1, context->f5);
/*80378AA4 003758A4*/ PPC::Runtime::ASM::b(.L_80378AAC);
RUNTIME_PPC_JUMP_LABEL(.L_80378AA8, 0x80378AA8) //this is a jump label
/*80378AA8 003758A8*/ PPC::Runtime::ASM::fmr(context->f1, context->f5);
RUNTIME_PPC_JUMP_LABEL(.L_80378AAC, 0x80378AAC) //this is a jump label
/*80378AAC 003758AC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378AB0 003758B0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80378AB4 003758B4*/ PPC::Runtime::ASM::ble(.L_80378ACC);
/*80378AB8 003758B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80378ABC 003758BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80378AC0 003758C0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80378AC4 003758C4*/ PPC::Runtime::ASM::fdivs(context->f2, context->f0, context->f5);
/*80378AC8 003758C8*/ PPC::Runtime::ASM::b(.L_80378AD4);
RUNTIME_PPC_JUMP_LABEL(.L_80378ACC, 0x80378ACC) //this is a jump label
/*80378ACC 003758CC*/ PPC::Runtime::ASM::lis(context->r3, StructValues_Float_7 @ Get_MemoryOffset_HighBit);
/*80378AD0 003758D0*/ PPC::Runtime::ASM::lfs(context->f2, StructValues_Float_7 @ Get_MemoryOffset_LowBit ( context->r3 ));
RUNTIME_PPC_JUMP_LABEL(.L_80378AD4, 0x80378AD4) //this is a jump label
/*80378AD4 003758D4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378AD8 003758D8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f6, context->f0);
/*80378ADC 003758DC*/ PPC::Runtime::ASM::bge(.L_80378AE8);
/*80378AE0 003758E0*/ PPC::Runtime::ASM::fneg(context->f1, context->f6);
/*80378AE4 003758E4*/ PPC::Runtime::ASM::b(.L_80378AEC);
RUNTIME_PPC_JUMP_LABEL(.L_80378AE8, 0x80378AE8) //this is a jump label
/*80378AE8 003758E8*/ PPC::Runtime::ASM::fmr(context->f1, context->f6);
RUNTIME_PPC_JUMP_LABEL(.L_80378AEC, 0x80378AEC) //this is a jump label
/*80378AEC 003758EC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378AF0 003758F0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80378AF4 003758F4*/ PPC::Runtime::ASM::ble(.L_80378B0C);
/*80378AF8 003758F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80378AFC 003758FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80378B00 00375900*/ PPC::Runtime::ASM::fsubs(context->f0, context->f3, context->f0);
/*80378B04 00375904*/ PPC::Runtime::ASM::fdivs(context->f3, context->f0, context->f6);
/*80378B08 00375908*/ PPC::Runtime::ASM::b(.L_80378B14);
RUNTIME_PPC_JUMP_LABEL(.L_80378B0C, 0x80378B0C) //this is a jump label
/*80378B0C 0037590C*/ PPC::Runtime::ASM::lis(context->r3, StructValues_Float_7 @ Get_MemoryOffset_HighBit);
/*80378B10 00375910*/ PPC::Runtime::ASM::lfs(context->f3, StructValues_Float_7 @ Get_MemoryOffset_LowBit ( context->r3 ));
RUNTIME_PPC_JUMP_LABEL(.L_80378B14, 0x80378B14) //this is a jump label
/*80378B14 00375914*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378B18 00375918*/ PPC::Runtime::ASM::fcmpo(cr0, context->f7, context->f0);
/*80378B1C 0037591C*/ PPC::Runtime::ASM::bge(.L_80378B28);
/*80378B20 00375920*/ PPC::Runtime::ASM::fneg(context->f1, context->f7);
/*80378B24 00375924*/ PPC::Runtime::ASM::b(.L_80378B2C);
RUNTIME_PPC_JUMP_LABEL(.L_80378B28, 0x80378B28) //this is a jump label
/*80378B28 00375928*/ PPC::Runtime::ASM::fmr(context->f1, context->f7);
RUNTIME_PPC_JUMP_LABEL(.L_80378B2C, 0x80378B2C) //this is a jump label
/*80378B2C 0037592C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378B30 00375930*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80378B34 00375934*/ PPC::Runtime::ASM::ble(.L_80378B4C);
/*80378B38 00375938*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80378B3C 0037593C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80378B40 00375940*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*80378B44 00375944*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f7);
/*80378B48 00375948*/ PPC::Runtime::ASM::b(.L_80378B54);
RUNTIME_PPC_JUMP_LABEL(.L_80378B4C, 0x80378B4C) //this is a jump label
/*80378B4C 0037594C*/ PPC::Runtime::ASM::lis(context->r3, StructValues_Float_7 @ Get_MemoryOffset_HighBit);
/*80378B50 00375950*/ PPC::Runtime::ASM::lfs(context->f0, StructValues_Float_7 @ Get_MemoryOffset_LowBit ( context->r3 ));
RUNTIME_PPC_JUMP_LABEL(.L_80378B54, 0x80378B54) //this is a jump label
/*80378B54 00375954*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80378B58 00375958*/ PPC::Runtime::ASM::bge(.L_80378B74);
/*80378B5C 0037595C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f2);
/*80378B60 00375960*/ PPC::Runtime::ASM::bge(.L_80378B6C);
/*80378B64 00375964*/ PPC::Runtime::ASM::fmr(context->f31, context->f3);
/*80378B68 00375968*/ PPC::Runtime::ASM::b(.L_80378B88);
RUNTIME_PPC_JUMP_LABEL(.L_80378B6C, 0x80378B6C) //this is a jump label
/*80378B6C 0037596C*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/*80378B70 00375970*/ PPC::Runtime::ASM::b(.L_80378B88);
RUNTIME_PPC_JUMP_LABEL(.L_80378B74, 0x80378B74) //this is a jump label
/*80378B74 00375974*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*80378B78 00375978*/ PPC::Runtime::ASM::bge(.L_80378B84);
/*80378B7C 0037597C*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
/*80378B80 00375980*/ PPC::Runtime::ASM::b(.L_80378B88);
RUNTIME_PPC_JUMP_LABEL(.L_80378B84, 0x80378B84) //this is a jump label
/*80378B84 00375984*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_80378B88, 0x80378B88) //this is a jump label
/*80378B88 00375988*/ PPC::Runtime::ASM::lis(context->r3, StructValues_Float_7 @ Get_MemoryOffset_HighBit);
/*80378B8C 0037598C*/ PPC::Runtime::ASM::lfs(context->f0, StructValues_Float_7 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*80378B90 00375990*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f0);
/*80378B94 00375994*/ PPC::Runtime::ASM::bne(.L_80378BB0);
/*80378B98 00375998*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F2AD4 @ Get_MemoryOffset_HighBit);
/*80378B9C 0037599C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F2AE8 @ Get_MemoryOffset_HighBit);
/*80378BA0 003759A0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F2AD4 @ Get_MemoryOffset_LowBit);
/*80378BA4 003759A4*/ PPC::Runtime::ASM::li(context->r4, 0xc1);
/*80378BA8 003759A8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804F2AE8 @ Get_MemoryOffset_LowBit);
/*80378BAC 003759AC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80378BB0, 0x80378BB0) //this is a jump label
/*80378BB0 003759B0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80378BB4 003759B4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*80378BB8 003759B8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80378BBC 003759BC*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80378BC0 003759C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80378BC4 003759C4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*80378BC8 003759C8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80378BCC 003759CC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xc);
/*80378BD0 003759D0*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*80378BD4 003759D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80378BD8 003759D8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*80378BDC 003759DC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*80378BE0 003759E0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*80378BE4 003759E4*/ PPC::Runtime::ASM::bl(fn_80061224);
/*80378BE8 003759E8*/ PPC::Runtime::ASM::mr(context->r29, context->r30);
/*80378BEC 003759EC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80378BF0 003759F0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80378BF4, 0x80378BF4) //this is a jump label
/*80378BF4 003759F4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378BF8 003759F8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80378BFC 003759FC*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBB60 @ Get_MemoryOffset_SDA21);
/*80378C00 00375A00*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBB58 @ Get_MemoryOffset_SDA21);
/*80378C04 00375A04*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80378C08 00375A08*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80378C0C 00375A0C*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x8);
/*80378C10 00375A10*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*80378C14 00375A14*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80378C18 00375A18*/ PPC::Runtime::ASM::beq(.L_80378C5C);
/*80378C1C 00375A1C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378C20 00375A20*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80378C24 00375A24*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBB60 @ Get_MemoryOffset_SDA21);
/*80378C28 00375A28*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBB58 @ Get_MemoryOffset_SDA21);
/*80378C2C 00375A2C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80378C30 00375A30*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80378C34 00375A34*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x8);
/*80378C38 00375A38*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*80378C3C 00375A3C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80378C40 00375A40*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r12));
/*80378C44 00375A44*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80378C48 00375A48*/ PPC::Runtime::ASM::bctrl();
/*80378C4C 00375A4C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80378C50 00375A50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80378C54 00375A54*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378C58 00375A58*/ PPC::Runtime::ASM::bl(fn_8005DB44);
RUNTIME_PPC_JUMP_LABEL(.L_80378C5C, 0x80378C5C) //this is a jump label
/*80378C5C 00375A5C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*80378C60 00375A60*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*80378C64 00375A64*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x4);
/*80378C68 00375A68*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x18);
/*80378C6C 00375A6C*/ PPC::Runtime::ASM::blt(.L_80378BF4);
/*80378C70 00375A70*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378C74 00375A74*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80378C78 00375A78*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBB80 @ Get_MemoryOffset_SDA21);
/*80378C7C 00375A7C*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBB78 @ Get_MemoryOffset_SDA21);
/*80378C80 00375A80*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80378C84 00375A84*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80378C88 00375A88*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80378C8C 00375A8C*/ PPC::Runtime::ASM::b(.L_80378D6C);
RUNTIME_PPC_JUMP_LABEL(.L_80378C90, 0x80378C90) //this is a jump label
/*80378C90 00375A90*/ PPC::Runtime::ASM::addic.(context->r31, context->r28, 0x28);
/*80378C94 00375A94*/ PPC::Runtime::ASM::beq(.L_80378D1C);
/*80378C98 00375A98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*80378C9C 00375A9C*/ PPC::Runtime::ASM::bl(fn_8005E108);
/*80378CA0 00375AA0*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*80378CA4 00375AA4*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/* 80378CA8 00375AA8  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*80378CAC 00375AAC*/ PPC::Runtime::ASM::beq(.L_80378D1C);
/*80378CB0 00375AB0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80378CB4 00375AB4*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x98);
/*80378CB8 00375AB8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80378CBC 00375ABC*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*80378CC0 00375AC0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378CC4 00375AC4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80378CC8 00375AC8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80378CCC 00375ACC*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*80378CD0 00375AD0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378CD4 00375AD4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80378CD8 00375AD8*/ PPC::Runtime::ASM::ble(.L_80378D1C);
/*80378CDC 00375ADC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80378CE0 00375AE0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80378CE4 00375AE4*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*80378CE8 00375AE8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80378CEC 00375AEC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80378CF0 00375AF0*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*80378CF4 00375AF4*/ PPC::Runtime::ASM::bl(fn_atan2?);
/*80378CF8 00375AF8*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
/*80378CFC 00375AFC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378D00 00375B00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*80378D04 00375B04*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80378D08 00375B08*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80378D0C 00375B0C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80378D10 00375B10*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80378D14 00375B14*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xb3);
/*80378D18 00375B18*/ PPC::Runtime::ASM::bl(fn_8005F688);
RUNTIME_PPC_JUMP_LABEL(.L_80378D1C, 0x80378D1C) //this is a jump label
/*80378D1C 00375B1C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*80378D20 00375B20*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80378D24 00375B24*/ PPC::Runtime::ASM::beq(.L_80378D54);
/*80378D28 00375B28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*80378D2C 00375B2C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80378D30 00375B30*/ PPC::Runtime::ASM::ble(.L_80378D40);
/*80378D34 00375B34*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80378D38 00375B38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*80378D3C 00375B3C*/ PPC::Runtime::ASM::b(.L_80378D54);
RUNTIME_PPC_JUMP_LABEL(.L_80378D40, 0x80378D40) //this is a jump label
/*80378D40 00375B40*/ PPC::Runtime::ASM::li(context->r3, 0xff);
/*80378D44 00375B44*/ PPC::Runtime::ASM::li(context->r4, 0x3c);
/*80378D48 00375B48*/ PPC::Runtime::ASM::bl(fn_8005FCA0);
/*80378D4C 00375B4C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80378D50 00375B50*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80378D54, 0x80378D54) //this is a jump label
/*80378D54 00375B54*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80378D58 00375B58*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80378D5C 00375B5C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*80378D60 00375B60*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80378D64 00375B64*/ PPC::Runtime::ASM::bctrl();
/*80378D68 00375B68*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80378D6C, 0x80378D6C) //this is a jump label
/*80378D6C 00375B6C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80378D70 00375B70*/ PPC::Runtime::ASM::bne(.L_80378C90);
/*80378D74 00375B74*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*80378D78 00375B78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80378D7C 00375B7C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80378D80 00375B80*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80378D84 00375B84*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80378D88 00375B88*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80378D8C 00375B8C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80378D90 00375B90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80378D94 00375B94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*80378D98 00375B98*/ PPC::Runtime::ASM::blr();
}