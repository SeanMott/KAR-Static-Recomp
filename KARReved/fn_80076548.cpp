//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80076548(PPC::Runtime::GCContext* context)
{
/*80076548 00073348*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007654C 0007334C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80076550 00073350*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*80076554 00073354*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80076558 00073358*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8007655C 0007335C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80076560 00073360*/ PPC::Runtime::ASM::li(context->r30, STRUCT_BYTE4_COUNT_1805DD5D8 @ Get_MemoryOffset_SDA21);
/*80076564 00073364*/ PPC::Runtime::ASM::beq(.L_80076654);
/*80076568 00073368*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD5D8 @ Get_MemoryOffset_SDA21);
/*8007656C 0007336C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80076570 00073370*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80076574 00073374*/ PPC::Runtime::ASM::bne(.L_800765E8);
/*80076578 00073378*/ PPC::Runtime::ASM::mulli(context->r31, context->r4, 0xc);
/*8007657C 0007337C*/ PPC::Runtime::ASM::lis(context->r5, StructWithStructs_43 @ Get_MemoryOffset_HighBit);
/*80076580 00073380*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80076584 00073384*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80076588 00073388*/ PPC::Runtime::ASM::addi(context->r5, context->r5, StructWithStructs_43 @ Get_MemoryOffset_LowBit);
/*8007658C 0007338C*/ PPC::Runtime::ASM::lwzx(context->r6, context->r5, context->r31);
/*80076590 00073390*/ PPC::Runtime::ASM::li(context->r5, lbl_805D53BC @ Get_MemoryOffset_SDA21);
/*80076594 00073394*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80076598 00073398*/ PPC::Runtime::ASM::bl(fn_8045031C);
/*8007659C 0007339C*/ PPC::Runtime::ASM::lis(context->r4, StructWithStructs_43 @ Get_MemoryOffset_HighBit);
/*800765A0 000733A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800765A4 000733A4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, StructWithStructs_43 @ Get_MemoryOffset_LowBit);
/*800765A8 000733A8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800765AC 000733AC*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r31);
/*800765B0 000733B0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D53BC @ Get_MemoryOffset_SDA21);
/*800765B4 000733B4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*800765B8 000733B8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800765BC 000733BC*/ PPC::Runtime::ASM::bl(fn_8045031C);
/*800765C0 000733C0*/ PPC::Runtime::ASM::lis(context->r4, StructWithStructs_43 @ Get_MemoryOffset_HighBit);
/*800765C4 000733C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800765C8 000733C8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, StructWithStructs_43 @ Get_MemoryOffset_LowBit);
/*800765CC 000733CC*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*800765D0 000733D0*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r31);
/*800765D4 000733D4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D53BC @ Get_MemoryOffset_SDA21);
/*800765D8 000733D8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*800765DC 000733DC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800765E0 000733E0*/ PPC::Runtime::ASM::bl(fn_8045031C);
/*800765E4 000733E4*/ PPC::Runtime::ASM::b(.L_80076654);
RUNTIME_PPC_JUMP_LABEL(.L_800765E8, 0x800765E8) //this is a jump label
/*800765E8 000733E8*/ PPC::Runtime::ASM::mulli(context->r31, context->r4, 0xc);
/*800765EC 000733EC*/ PPC::Runtime::ASM::lis(context->r5, StructWithStructs_45 @ Get_MemoryOffset_HighBit);
/*800765F0 000733F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800765F4 000733F4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800765F8 000733F8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, StructWithStructs_45 @ Get_MemoryOffset_LowBit);
/*800765FC 000733FC*/ PPC::Runtime::ASM::lwzx(context->r6, context->r5, context->r31);
/*80076600 00073400*/ PPC::Runtime::ASM::li(context->r5, lbl_805D53BC @ Get_MemoryOffset_SDA21);
/*80076604 00073404*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80076608 00073408*/ PPC::Runtime::ASM::bl(fn_8045031C);
/*8007660C 0007340C*/ PPC::Runtime::ASM::lis(context->r4, StructWithStructs_45 @ Get_MemoryOffset_HighBit);
/*80076610 00073410*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80076614 00073414*/ PPC::Runtime::ASM::addi(context->r0, context->r4, StructWithStructs_45 @ Get_MemoryOffset_LowBit);
/*80076618 00073418*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8007661C 0007341C*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r31);
/*80076620 00073420*/ PPC::Runtime::ASM::li(context->r5, lbl_805D53BC @ Get_MemoryOffset_SDA21);
/*80076624 00073424*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80076628 00073428*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8007662C 0007342C*/ PPC::Runtime::ASM::bl(fn_8045031C);
/*80076630 00073430*/ PPC::Runtime::ASM::lis(context->r4, StructWithStructs_45 @ Get_MemoryOffset_HighBit);
/*80076634 00073434*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80076638 00073438*/ PPC::Runtime::ASM::addi(context->r0, context->r4, StructWithStructs_45 @ Get_MemoryOffset_LowBit);
/*8007663C 0007343C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80076640 00073440*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r31);
/*80076644 00073444*/ PPC::Runtime::ASM::li(context->r5, lbl_805D53BC @ Get_MemoryOffset_SDA21);
/*80076648 00073448*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8007664C 0007344C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80076650 00073450*/ PPC::Runtime::ASM::bl(fn_8045031C);
RUNTIME_PPC_JUMP_LABEL(.L_80076654, 0x80076654) //this is a jump label
/*80076654 00073454*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80076658 00073458*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8007665C 0007345C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80076660 00073460*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80076664 00073464*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80076668 00073468*/ PPC::Runtime::ASM::blr();
}