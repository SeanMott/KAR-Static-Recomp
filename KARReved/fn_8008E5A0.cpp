//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"
#include "fn_800AB4C0.hpp"
#include "fn_dbPutString.hpp"



void fn_8008E5A0(PPC::Runtime::GCContext* context)
{
/*8008E5A0 0008B3A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8008E5A4 0008B3A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8008E5A8 0008B3A8*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E5AC 0008B3AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8008E5B0 0008B3B0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8008E5B4 0008B3B4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8008E5B8 0008B3B8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8008E5BC 0008B3BC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8008E5C0 0008B3C0*/ PPC::Runtime::ASM::addi(context->r3, context->r5, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E5C4 0008B3C4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8008E5C8 0008B3C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E5CC 0008B3CC*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E5D0 0008B3D0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E5D4 0008B3D4*/ PPC::Runtime::ASM::li(context->r4, String_ "Arrow_Formater_Strin" Get_MemoryOffset_SDA21);
/*8008E5D8 0008B3D8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E5DC 0008B3DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E5E0 0008B3E0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8008E5E4 0008B3E4*/ PPC::Runtime::ASM::bl(fn_dbPutString);
/*8008E5E8 0008B3E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8008E5EC 0008B3EC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x7);
/*8008E5F0 0008B3F0*/ PPC::Runtime::ASM::bgt(.L_8008E8E8);
/*8008E5F4 0008B3F4*/ PPC::Runtime::ASM::lis(context->r3, jumptable_8049C634 @ Get_MemoryOffset_HighBit);
/*8008E5F8 0008B3F8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8008E5FC 0008B3FC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_8049C634 @ Get_MemoryOffset_LowBit);
/*8008E600 0008B400*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8008E604 0008B404*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8008E608 0008B408*/ PPC::Runtime::ASM::bctr();
/*8008E60C 0008B40C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E610 0008B410*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8008E614 0008B414*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E618 0008B418*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8008E61C 0008B41C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E620 0008B420*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E624 0008B424*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E628 0008B428*/ PPC::Runtime::ASM::li(context->r4, lbl_805D57E4 @ Get_MemoryOffset_SDA21);
/*8008E62C 0008B42C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E630 0008B430*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E634 0008B434*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8008E638 0008B438*/ PPC::Runtime::ASM::bl(fn_dbPutString);
/*8008E63C 0008B43C*/ PPC::Runtime::ASM::b(.L_8008E8E8);
/*8008E640 0008B440*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E644 0008B444*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8008E648 0008B448*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E64C 0008B44C*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8008E650 0008B450*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E654 0008B454*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E658 0008B458*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E65C 0008B45C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D58B8 @ Get_MemoryOffset_SDA21);
/*8008E660 0008B460*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E664 0008B464*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E668 0008B468*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8008E66C 0008B46C*/ PPC::Runtime::ASM::bl(fn_dbPutString);
/*8008E670 0008B470*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E674 0008B474*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8008E678 0008B478*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E67C 0008B47C*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*8008E680 0008B480*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E684 0008B484*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E688 0008B488*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E68C 0008B48C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8008E690 0008B490*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E694 0008B494*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8008E698 0008B498*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E69C 0008B49C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D58C0 @ Get_MemoryOffset_SDA21);
/*8008E6A0 0008B4A0*/ PPC::Runtime::ASM::subf(context->r5, context->r5, context->r0);
/*8008E6A4 0008B4A4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8008E6A8 0008B4A8*/ PPC::Runtime::ASM::bl(fn_dbPutString);
/*8008E6AC 0008B4AC*/ PPC::Runtime::ASM::b(.L_8008E8E8);
/*8008E6B0 0008B4B0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E6B4 0008B4B4*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8008E6B8 0008B4B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E6BC 0008B4BC*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8008E6C0 0008B4C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E6C4 0008B4C4*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E6C8 0008B4C8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E6CC 0008B4CC*/ PPC::Runtime::ASM::li(context->r4, lbl_805D58C4 @ Get_MemoryOffset_SDA21);
/*8008E6D0 0008B4D0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E6D4 0008B4D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E6D8 0008B4D8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8008E6DC 0008B4DC*/ PPC::Runtime::ASM::bl(fn_dbPutString);
/*8008E6E0 0008B4E0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E6E4 0008B4E4*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8008E6E8 0008B4E8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E6EC 0008B4EC*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*8008E6F0 0008B4F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E6F4 0008B4F4*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E6F8 0008B4F8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E6FC 0008B4FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8008E700 0008B500*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E704 0008B504*/ PPC::Runtime::ASM::li(context->r4, lbl_805D58CC @ Get_MemoryOffset_SDA21);
/*8008E708 0008B508*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/* 8008E70C 0008B50C  4C C6 32 42 */ crset context->cr1eq
/*8008E710 0008B510*/ PPC::Runtime::ASM::bl(fn_dbPutString);
/*8008E714 0008B514*/ PPC::Runtime::ASM::b(.L_8008E8E8);
/*8008E718 0008B518*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E71C 0008B51C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8008E720 0008B520*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E724 0008B524*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8008E728 0008B528*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E72C 0008B52C*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E730 0008B530*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E734 0008B534*/ PPC::Runtime::ASM::li(context->r4, String_ "helmit" Get_MemoryOffset_SDA21);
/*8008E738 0008B538*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E73C 0008B53C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E740 0008B540*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8008E744 0008B544*/ PPC::Runtime::ASM::bl(fn_dbPutString);
/*8008E748 0008B548*/ PPC::Runtime::ASM::b(.L_8008E8E8);
/*8008E74C 0008B54C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E750 0008B550*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8008E754 0008B554*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E758 0008B558*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8008E75C 0008B55C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E760 0008B560*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E764 0008B564*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E768 0008B568*/ PPC::Runtime::ASM::li(context->r4, String_ "sp" Get_MemoryOffset_SDA21);
/*8008E76C 0008B56C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E770 0008B570*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E774 0008B574*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8008E778 0008B578*/ PPC::Runtime::ASM::bl(fn_dbPutString);
/*8008E77C 0008B57C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E780 0008B580*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8008E784 0008B584*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E788 0008B588*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*8008E78C 0008B58C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E790 0008B590*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E794 0008B594*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E798 0008B598*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8008E79C 0008B59C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E7A0 0008B5A0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D58CC @ Get_MemoryOffset_SDA21);
/*8008E7A4 0008B5A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/* 8008E7A8 0008B5A8  4C C6 32 42 */ crset context->cr1eq
/*8008E7AC 0008B5AC*/ PPC::Runtime::ASM::bl(fn_dbPutString);
/*8008E7B0 0008B5B0*/ PPC::Runtime::ASM::b(.L_8008E8E8);
/*8008E7B4 0008B5B4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E7B8 0008B5B8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8008E7BC 0008B5BC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E7C0 0008B5C0*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8008E7C4 0008B5C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E7C8 0008B5C8*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E7CC 0008B5CC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E7D0 0008B5D0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D58DC @ Get_MemoryOffset_SDA21);
/*8008E7D4 0008B5D4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E7D8 0008B5D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E7DC 0008B5DC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8008E7E0 0008B5E0*/ PPC::Runtime::ASM::bl(fn_dbPutString);
/*8008E7E4 0008B5E4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E7E8 0008B5E8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8008E7EC 0008B5EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E7F0 0008B5F0*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*8008E7F4 0008B5F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E7F8 0008B5F8*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E7FC 0008B5FC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E800 0008B600*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8008E804 0008B604*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E808 0008B608*/ PPC::Runtime::ASM::li(context->r4, String_ "e_FlagF_Formater_Strin" Get_MemoryOffset_SDA21);
/*8008E80C 0008B60C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/* 8008E810 0008B610  4C C6 32 42 */ crset context->cr1eq
/*8008E814 0008B614*/ PPC::Runtime::ASM::bl(fn_dbPutString);
/*8008E818 0008B618*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E81C 0008B61C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8008E820 0008B620*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E824 0008B624*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8008E828 0008B628*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E82C 0008B62C*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E830 0008B630*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E834 0008B634*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8008E838 0008B638*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E83C 0008B63C*/ PPC::Runtime::ASM::li(context->r4, String_ "a_FlagF_Formater_Strin" Get_MemoryOffset_SDA21);
/*8008E840 0008B640*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/* 8008E844 0008B644  4C C6 32 42 */ crset context->cr1eq
/*8008E848 0008B648*/ PPC::Runtime::ASM::bl(fn_dbPutString);
/*8008E84C 0008B64C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E850 0008B650*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8008E854 0008B654*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E858 0008B658*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*8008E85C 0008B65C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E860 0008B660*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E864 0008B664*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E868 0008B668*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8008E86C 0008B66C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E870 0008B670*/ PPC::Runtime::ASM::li(context->r4, String_ "u_FlagF_Formater_Strin" Get_MemoryOffset_SDA21);
/*8008E874 0008B674*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/* 8008E878 0008B678  4C C6 32 42 */ crset context->cr1eq
/*8008E87C 0008B67C*/ PPC::Runtime::ASM::bl(fn_dbPutString);
/*8008E880 0008B680*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E884 0008B684*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8008E888 0008B688*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E88C 0008B68C*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*8008E890 0008B690*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E894 0008B694*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E898 0008B698*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E89C 0008B69C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*8008E8A0 0008B6A0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E8A4 0008B6A4*/ PPC::Runtime::ASM::li(context->r4, String_ "f_FlagF_Formater_Strin" Get_MemoryOffset_SDA21);
/*8008E8A8 0008B6A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/* 8008E8AC 0008B6AC  4C C6 32 42 */ crset context->cr1eq
/*8008E8B0 0008B6B0*/ PPC::Runtime::ASM::bl(fn_dbPutString);
/*8008E8B4 0008B6B4*/ PPC::Runtime::ASM::b(.L_8008E8E8);
/*8008E8B8 0008B6B8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E8BC 0008B6BC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8008E8C0 0008B6C0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E8C4 0008B6C4*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8008E8C8 0008B6C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E8CC 0008B6CC*/ PPC::Runtime::ASM::bl(fn_800AB4C0);
/*8008E8D0 0008B6D0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008E8D4 0008B6D4*/ PPC::Runtime::ASM::li(context->r4, lbl_805D58F4 @ Get_MemoryOffset_SDA21);
/*8008E8D8 0008B6D8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit);
/*8008E8DC 0008B6DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008E8E0 0008B6E0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8008E8E4 0008B6E4*/ PPC::Runtime::ASM::bl(fn_dbPutString);
RUNTIME_PPC_JUMP_LABEL(.L_8008E8E8, 0x8008E8E8) //this is a jump label
/*8008E8E8 0008B6E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8008E8EC 0008B6EC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x6);
/*8008E8F0 0008B6F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8008E8F4 0008B6F4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8008E8F8 0008B6F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8008E8FC 0008B6FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8008E900 0008B700*/ PPC::Runtime::ASM::blr();
}